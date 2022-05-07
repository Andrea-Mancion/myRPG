/*
** EPITECH PROJECT, 2022
** click_button.c
** File description:
** game button
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../includes/my_rpg.h"
#include "../includes/button.h"
#include "../includes/my.h"
#include "../includes/my_rpg.h"

void pos_play(sfRenderWindow *window, struct_object *object)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)window);

    if (mouse_pos.y >= 536 && mouse_pos.y <= 617)
        if (mouse_pos.x >= 738 && mouse_pos.x <= 1187)
            while (sfRenderWindow_pollEvent(window, &object->event.event))
                if (object->event.event.type == sfEvtMouseButtonPressed)
                    object->play = 1;
}

void pos_settings(sfRenderWindow* window, struct_object *object)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)window);

    if (mouse_pos.y >= 350 && mouse_pos.y <= 472) {
        if (mouse_pos.x >= 853 && mouse_pos.x <= 1072) {
            while (sfRenderWindow_pollEvent(window, &object->event.event)) {
                if (object->event.event.type == sfEvtMouseButtonPressed) {
                    //window_settings();
                    break;
                }
            }
        }
    }
}

void pos_quit(sfRenderWindow* window, struct_object *object)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)window);

    if (mouse_pos.y >= 550 && mouse_pos.y <= 723) {
        if (mouse_pos.x >= 735 && mouse_pos.x <= 1099) {
            while (sfRenderWindow_pollEvent(window, &object->event.event)) {
                if (object->event.event.type == sfEvtMouseButtonPressed) {
                    sfRenderWindow_close(window);
                    break;
                }
            }
        }
    }
}
