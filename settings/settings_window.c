/*
** EPITECH PROJECT, 2022
** settings_window.c
** File description:
** game menu
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include <SFML/Graphics.h>
#include "../includes/my_rpg.h"
#include "../includes/my.h"

int settings_window(t_gbl *gbl)
{
    struct_object *object = malloc(sizeof(struct_object));

    while (sfRenderWindow_isOpen(object->window.window)) {
        sfRenderWindow_clear(object->window.window, sfBlack);
        background_settings(gbl);
        button_volume(gbl);
    }
}
