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

void create_back2(struct_object *object)
{
    object->back2.back_text2 = sfTexture_createFromFile("ressource/back2.png",
    NULL);
    object->back2.back2_s = sfSprite_create();
    sfSprite_setTexture(object->back2.back2_s, object->back2.back_text2,
    sfTrue);
    object->back2.back2.top = 0;
    object->back2.back2.left = 0;
    object->back2.back2.width = 1920;
    object->back2.back2.height = 1080;
    sfSprite_setTextureRect(object->back2.back2_s, object->back2.back2);
    object->back2.back2_scale.x = 5;
    object->back2.back2_scale.y = 5;
    sfSprite_setScale(object->back2.back2_s, object->back2.back2_scale);
}