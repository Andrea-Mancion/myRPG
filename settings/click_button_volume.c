/*
** EPITECH PROJECT, 2021
** button_settings.c
** File description:
** button of the menu
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include <stdio.h>
#include "../includes/my_rpg.h"
#include "../includes/my_lib.h"

//void sfSound_setVolume(sfSound* sound, float volume);

void pos_no_volume(sfRenderWindow *window, struct_object *object)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)window);

    if (mouse_pos.y >= 550 && mouse_pos.y <= 723) {
        if (mouse_pos.x >= 735 && mouse_pos.x <= 1099) {
            while (sfRenderWindow_pollEvent(window, &object->event.event)) {
                if (object->event.event.type == sfEvtMouseButtonPressed) {
                    //couper le son
                    break;
                }
            }
        }
    }
}

void pos_volume_minus(sfRenderWindow *window, struct_object *object)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)window);

    if (mouse_pos.y >= 550 && mouse_pos.y <= 723) {
        if (mouse_pos.x >= 735 && mouse_pos.x <= 1099) {
            while (sfRenderWindow_pollEvent(window, &object->event.event)) {
                if (object->event.event.type == sfEvtMouseButtonPressed) {
                    //diminuer le son
                    break;
                }
            }
        }
    }
}

void pos_volume_plus(sfRenderWindow *window, struct_object *object)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)window);

    if (mouse_pos.y >= 550 && mouse_pos.y <= 723) {
        if (mouse_pos.x >= 735 && mouse_pos.x <= 1099) {
            while (sfRenderWindow_pollEvent(window, &object->event.event)) {
                if (object->event.event.type == sfEvtMouseButtonPressed) {
                    //augmenter le son
                    break;
                }
            }
        }
    }
}
