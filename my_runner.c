/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** un géométrie dash
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include "help.h"
#include "includes/my_rpg.h"
#include "my.h"

int my_putchar(char c);
int my_putstr(char *str);
void render_window(struct_object *object);

static void analyse_events(sfRenderWindow *window, sfEvent event, struct_object *object)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (sfKeyboard_isKeyPressed(sfKeyI))
        object->print = true;
    if (object->print == true && sfKeyboard_isKeyPressed(sfKeyEscape))
        object->print = false;
}

int second_window(struct_object *object)
{
    object->print = false;
    create_object(object);
    create_inventory(object);

    while (sfRenderWindow_isOpen(object->window.window)) {
        sfRenderWindow_clear(object->window.window, sfBlack);
        move_object(object);
        render_window(object);
        while (sfRenderWindow_pollEvent(object->window.window, &object->event.event))
            analyse_events(object->window.window, object->event.event, object);
    }
    destroy(object);
    return (0);
}