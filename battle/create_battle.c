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

static void create_music_battle(struct_object *obj)
{
    sfMusic_pause(obj->music.music);
    obj->music_battle.music =
    sfMusic_createFromFile("assets/music/battle_rpg.ogg");
    sfMusic_setVolume(obj->music_battle.music, 80);
    sfMusic_play(obj->music_battle.music);
}

static void create_battle_back(struct_object *object)
{
    sfVector2f size = {1.0, 0.8};

    object->battle.battle_back.background_text =
    sfTexture_createFromFile("./assets/sprites/battle_rpg.png", NULL);
    object->battle.battle_back.background = sfSprite_create();
    sfSprite_setScale(object->battle.battle_back.background, size);
    sfSprite_setTexture(object->battle.battle_back.background,
    object->battle.battle_back.background_text, sfTrue);
    sfSprite_setScale(object->battle.battle_back.background,
    (sfVector2f){3, 4.5});
}

struct_charachter create_foe_battle(struct_charachter foe, char *png)
{
    sfVector2f size = {2.0, 2.0};

    foe.texture = sfTexture_createFromFile(png, NULL);
    foe.sprite = sfSprite_create();
    foe.position.x = 200;
    foe.position.y = 500;
    foe.rect.top = 0;
    foe.rect.left = 0;
    foe.rect.width = 37;
    foe.rect.height = 45;
    foe.health = 10;
    foe.pv = 20;
    sfSprite_setTexture(foe.sprite, foe.texture, sfTrue);
    sfSprite_setPosition(foe.sprite, foe.position);
    sfSprite_setTextureRect(foe.sprite, foe.rect);
    sfSprite_setScale(foe.sprite, size);
    return (foe);
}

static void create_clock_battle(struct_object *object)
{
    object->clock_battle.clock = sfClock_create();
}

struct_charachter init_battle(struct_object *object, struct_charachter foe,
char *png)
{
    foe = create_foe_battle(foe, png);
    create_text_battle(object, foe);
    create_battle_back(object);
    foe = create_button_battle(object, foe);
    create_hero_battle(object);
    create_music_battle(object);
    create_clock_battle(object);
    object->battle.battle_beg = true;
    return foe;
}
