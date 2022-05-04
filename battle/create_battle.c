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
#include "../includes/my_rpg.h"
#include "../includes/my_lib.h"
#include "../includes/my.h"

static void create_battle_back(struct_object *object)
{
    sfVector2f size = {1.0, 0.8};

    object->battle.battle_back.background_text =
    sfTexture_createFromFile("./assets/sprites/battle_rpg.png", NULL);
    object->battle.battle_back.background = sfSprite_create();
    sfSprite_setScale(object->battle.battle_back.background, size);
    sfSprite_setTexture(object->battle.battle_back.background,
    object->battle.battle_back.background_text, sfTrue);
    sfSprite_setScale(object->battle.battle_back.background, (sfVector2f){3, 4.5});
}

struct_charachter create_foe_battle(struct_object *object,
struct_charachter foe, char *png)
{
    foe.texture = sfTexture_createFromFile(png, NULL);
    foe.sprite = sfSprite_create();
    foe.position.x = 200;
    foe.position.y = 500;
    foe.rect.top = 98;
    foe.rect.left = 0;
    foe.rect.width = 35;
    foe.rect.height = 142;
    foe.health = 10;
    sfSprite_setTexture(foe.sprite, foe.texture, sfTrue);
    sfSprite_setPosition(foe.sprite, foe.position);
    sfSprite_setTextureRect(foe.sprite, foe.rect);
    return (foe);
}

struct_charachter start_battle(struct_object *object, struct_charachter foe)
{
    foe = create_foe_battle(object, foe,
    "./assets/sprites/balk_anny.png");
    create_text_battle(object, foe);
    create_battle_back(object);
    object->hero.position = (sfVector2f){1000, 500};
    sfSprite_setPosition(object->hero.sprite, object->hero.position);
    object->battle.battle_beg = true;
    return foe;
}
