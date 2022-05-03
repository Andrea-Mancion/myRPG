/*
** EPITECH PROJECT, 2022
** click_but_pause.c
** File description:
** for interacte with buttons on the pause menu
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../includes/my_rpg.h"
#include "../includes/button.h"
#include "../includes/my.h"
#include "../includes/my_rpg.h"

static void pos_continue2(sfRenderWindow *window, sfEvent *event,
struct_object *object)
{
    while (sfRenderWindow_pollEvent(window, event))
        if (event->type == sfEvtMouseButtonPressed)
            object->print_pause = false;
}

static void pos_continue(sfRenderWindow *window, sfEvent *event,
struct_object *object)
{
    sfVector2i mouse_position = sfMouse_getPosition((const sfWindow *)window);

    if (mouse_position.y >= 512 && mouse_position.y <= 588) {
        if (mouse_position.x >= 745 && mouse_position.x <= 947)
            pos_continue2(window, event, object);
    }
}

static void pos_exit2(sfRenderWindow *window, sfEvent *event)
{
    while (sfRenderWindow_pollEvent(window, event))
        if (event->type == sfEvtMouseButtonPressed)
            sfRenderWindow_close(window);
}

static void pos_exit(sfRenderWindow *window, sfEvent *event)
{
    sfVector2i mouse_position = sfMouse_getPosition((const sfWindow *)window);

    if (mouse_position.y >= 706 && mouse_position.y <= 795) {
        if (mouse_position.x >= 745 && mouse_position.x <= 953)
            pos_exit2(window, event);
    }
}

void click_but(sfRenderWindow *window, sfEvent event, struct_object *object)
{
    pos_continue(window, &event, object);
    pos_exit(window, &event);
}