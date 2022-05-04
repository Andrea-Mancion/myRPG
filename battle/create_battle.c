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

    object->battle.battle_back.background_text =
    sfTexture_createFromFile("./assets/sprites/battle_rpg.png", NULL);
    object->battle.battle_back.background = sfSprite_create();
    sfSprite_setScale(object->battle.battle_back.background, size);
    sfSprite_setTexture(object->battle.battle_back.background,
    object->battle.battle_back.background_text, sfTrue);
}

static void create_foe_battle(struct_object *object)
{
    object->battle.foe.texture =
    sfTexture_createFromFile("./assets/sprites/balk_anny.png", NULL);
    object->battle.foe.sprite = sfSprite_create();
    object->battle.foe.position.x = 200;
    object->battle.foe.position.y = 500;
    object->battle.foe.rect.top = 98;
    object->battle.foe.rect.left = 0;
    object->battle.foe.rect.width = 35;
    object->battle.foe.rect.height = 142;
    sfSprite_setTexture(object->battle.foe.sprite, object->battle.foe.texture,
    sfTrue);
    sfSprite_setPosition(object->battle.foe.sprite,
    object->battle.foe.position);
    sfSprite_setTextureRect(object->battle.foe.sprite,
    object->battle.foe.rect);
}