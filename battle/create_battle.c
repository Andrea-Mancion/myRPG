/*
** EPITECH PROJECT, 2022
** create_battle.c
** File description:
** create the necessary for the battle of the RPG
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include "includes/my_rpg.h"
#include "../includes/my_lib.h"
#include "includes/my.h"

static void create_battle_back(struct_object *object)
{
    sfVector2f size = {1.0, 0.8};

    object->battle_back.background_text =
    sfTexture_createFromFile("./assets/sprites/battle_rpg.png", NULL);
    object->battle_back.background = sfSprite_create();
    sfSprite_setScale(object->battle_back.background, size);
    sfSprite_setTexture(object->battle_back.background,
    object->battle_back.background_text, sfTrue);
}

static void 