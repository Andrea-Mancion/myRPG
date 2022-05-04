/*
** EPITECH PROJECT, 2022
** print_battle.c
** File description:
** print all that is ont he battle
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include "../includes/my_rpg.h"
#include "../includes/my_lib.h"
#include "../includes/my.h"

static void print_text(struct_object *obj)
{
    for (int x = 0; x < 6; x++)
        sfRenderWindow_drawText(obj->window.window, obj->battle.text_battle[x]->text_invent, NULL);
}

void print_battle(struct_object *obj, struct_charachter foe)
{
    sfRenderWindow_drawSprite(obj->window.window, obj->battle.battle_back.background, NULL);
    sfRenderWindow_drawSprite(obj->window.window, foe.sprite, NULL);
    sfRenderWindow_drawSprite(obj->window.window, obj->hero.sprite, NULL);
    print_text(obj);
}