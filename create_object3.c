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


void create_back3(struct_object *object)
{
    object->back3.back_text3 = sfTexture_createFromFile("ressource/back3.png", NULL);
    object->back3.back3_s = sfSprite_create();
    sfSprite_setTexture(object->back3.back3_s, object->back3.back_text3, sfTrue);
    object->back3.back3.top = 0;
    object->back3.back3.left = 0;
    object->back3.back3.width = 1920;
    object->back3.back3.height = 1080;
    sfSprite_setTextureRect(object->back3.back3_s, object->back3.back3);
    object->back3.back3_scale.x = 5;
    object->back3.back3_scale.y = 5;
    sfSprite_setScale(object->back3.back3_s, object->back3.back3_scale);
}

void create_back4(struct_object *object)
{
    object->back4.back_text4 = sfTexture_createFromFile("ressource/back4.png", NULL);
    object->back4.back4_s = sfSprite_create();
    sfSprite_setTexture(object->back4.back4_s, object->back4.back_text4, sfTrue);
    object->back4.back4.top = 0;
    object->back4.back4.left = 0;
    object->back4.back4.width = 1920;
    object->back4.back4.height = 1080;
    sfSprite_setTextureRect(object->back4.back4_s, object->back4.back4);
    object->back4.back4_scale.x = 4.5;
    object->back4.back4_scale.y = 4.5;
    sfSprite_setScale(object->back4.back4_s, object->back4.back4_scale);

}

void game_over(struct_object *object)
{
    object->game_over.counter2 = 0;
    object->game_over.game_text = sfTexture_createFromFile("ressource/game_over.png", NULL);
    object->game_over.game_s = sfSprite_create();
    sfSprite_setTexture(object->game_over.game_s, object->game_over.game_text, sfTrue);
    object->game_over.game.top = 0;
    object->game_over.game.left = 0;
    object->game_over.game.width = 1920;
    object->game_over.game.height = 1080;
    sfSprite_setTextureRect(object->game_over.game_s, object->game_over.game);
}