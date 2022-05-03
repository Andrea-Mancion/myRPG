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
#include "includes/my_rpg.h"

void create_clock(struct_object *object)
{
    object->clock.clock = sfClock_create();
}

void create_music(struct_object *object)
{
    object->music.music = sfMusic_createFromFile("undertale-megalovania.ogg");
    sfMusic_setVolume(object->music.music, 80);
    sfMusic_play(object->music.music);
}

/*void create_ennemy(struct_object *object)
{
    object->ennemy.texture_ennemy = sfTexture_createFromFile("ennemy_runner.png", NULL);
    object->ennemy.sprite_ennemy = sfSprite_create();
    object->ennemy.position_ennemy.x = 1500;
    object->ennemy.position_ennemy.y = 750;
    sfSprite_setTexture(object->ennemy.sprite_ennemy, object->ennemy.texture_ennemy, sfTrue);
    sfSprite_setPosition(object->ennemy.sprite_ennemy, object->ennemy.position_ennemy);
    object->ennemy.rect_ennemy.top = 50;
    object->ennemy.rect_ennemy.left = 50;
    object->ennemy.rect_ennemy.width = 500;
    object->ennemy.rect_ennemy.height = 500;
    sfSprite_setTextureRect(object->ennemy.sprite_ennemy, object->ennemy.rect_ennemy);
    object->ennemy.scale.x = 0.5;
    object->ennemy.scale.y = 0.5;
    sfSprite_setScale(object->ennemy.sprite_ennemy, object->ennemy.scale);
}

void create_ennemy2(struct_object *object)
{
    object->ennemy2.texture_ennemy2 = sfTexture_createFromFile("ennemy_spamton.png", NULL);
    object->ennemy2.sprite_ennemy2 = sfSprite_create();
    object->ennemy2.position_ennemy2.x = 800;
    object->ennemy2.position_ennemy2.y = 750;
    sfSprite_setTexture(object->ennemy2.sprite_ennemy2, object->ennemy2.texture_ennemy2, sfTrue);
    sfSprite_setPosition(object->ennemy2.sprite_ennemy2, object->ennemy2.position_ennemy2);
    object->ennemy2.rect_ennemy2.top = 50;
    object->ennemy2.rect_ennemy2.left = 50;
    object->ennemy2.rect_ennemy2.width = 500;
    object->ennemy2.rect_ennemy2.height = 500;
    sfSprite_setTextureRect(object->ennemy2.sprite_ennemy2, object->ennemy2.rect_ennemy2);
    object->ennemy2.scale2.x = 0.5;
    object->ennemy2.scale2.y = 0.5;
    sfSprite_setScale(object->ennemy2.sprite_ennemy2, object->ennemy2.scale2);
}*/

void create_back2(struct_object *object)
{
    object->back2.back_text2 = sfTexture_createFromFile("ressource/back2.png", NULL);
    object->back2.back2_s = sfSprite_create();
    sfSprite_setTexture(object->back2.back2_s, object->back2.back_text2, sfTrue);
    object->back2.back2.top = 0;
    object->back2.back2.left = 0;
    object->back2.back2.width = 1920;
    object->back2.back2.height = 1080;
    sfSprite_setTextureRect(object->back2.back2_s, object->back2.back2);
    object->back2.back2_scale.x = 5;
    object->back2.back2_scale.y = 5;
    sfSprite_setScale(object->back2.back2_s, object->back2.back2_scale);
}