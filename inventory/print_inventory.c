/*
** EPITECH PROJECT, 2022
** print_inventory.c
** File description:
** print our inventory
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include "../includes/my_rpg.h"
#include "../my.h"

#define TOTALE_CASE 27

void print_inventory(struct_object *object)
{
    for (int a = 0; a < TOTALE_CASE; a++)
        if (object->inventory[a]->used)
            sfRenderWindow_drawSprite(object->window.window, object->inventory[a]->inv_s, NULL);
}