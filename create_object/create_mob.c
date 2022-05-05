/*
** EPITECH PROJECT, 2022
** create_mob.c
** File description:
** create a little mob for the first battle
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include "../includes/my_rpg.h"
#include "../includes/my_lib.h"
#include "../includes/my.h"

void create_blob(struct_object *obj)
{
    obj->blob.texture = sfTexture_createFromFile("./assets/sprites/blob.png",
    NULL);
    obj->blob.sprite = sfSprite_create();
    obj->blob.position.x = 750;
    obj->blob.position.y = 650;
    obj->blob.rect.top = 0;
    obj->blob.rect.left = 5;
    obj->blob.rect.width = 30;
    obj->blob.rect.height = 40;
    sfSprite_setTexture(obj->blob.sprite, obj->blob.texture, sfTrue);
    sfSprite_setTextureRect(obj->blob.sprite, obj->blob.rect);
    sfSprite_setPosition(obj->blob.sprite, obj->blob.position);
}