/*
** EPITECH PROJECT, 2021
** create_object
** File description:
** for runner
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include "../includes/my_rpg.h"
#include "../includes/my_lib.h"
#include "../includes/my.h"

void create_ranger(struct_object *object)
{
    object->hero.texture =
    sfTexture_createFromFile("assets/sprites/ranger.png", NULL);
    object->hero.sprite = sfSprite_create();
    object->hero.position.x = 150;
    object->hero.position.y = 350;
    sfSprite_setTexture(object->hero.sprite, object->hero.texture, sfTrue);
    sfSprite_setPosition(object->hero.sprite, object->hero.position);
    object->hero.rect.top = 0;
    object->hero.rect.left = 0;
    object->hero.rect.width = 37;
    object->hero.rect.height = 48;
    sfSprite_setTextureRect(object->hero.sprite, object->hero.rect);
}

void create_spellcaster(struct_object *object)
{
    object->hero.texture =
    sfTexture_createFromFile("assets/sprites/spellcaster.png", NULL);
    object->hero.sprite = sfSprite_create();
    object->hero.position.x = 150;
    object->hero.position.y = 350;
    sfSprite_setTexture(object->hero.sprite, object->hero.texture, sfTrue);
    sfSprite_setPosition(object->hero.sprite, object->hero.position);
    object->hero.rect.top = 0;
    object->hero.rect.left = 0;
    object->hero.rect.width = 37;
    object->hero.rect.height = 48;
    sfSprite_setTextureRect(object->hero.sprite, object->hero.rect);
}


void create_clock(struct_object *object)
{
    object->clock.clock = sfClock_create();
}

void create_music(struct_object *object)
{
    object->music.music =
    sfMusic_createFromFile("assets/music/undertale-megalovania.ogg");
    sfMusic_setVolume(object->music.music, 80);
    sfMusic_play(object->music.music);
}
