/*
** EPITECH PROJECT, 2021
** button_settings.c
** File description:
** button of the menu
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include <stdio.h>
#include "../includes/my_rpg.h"
#include "../includes/my_lib.h"

void button_volume(t_gbl *opti)
{
    sfVector2f pos = (sfVector2f) {720, 430};
    opti->play.texture = sfTexture_createFromFile("./assets/sprites/button_np_volume.png", NULL);
    sfVector2f size = {2.5, 2.5};

    opti->play.sprite = sfSprite_create();
    sfSprite_setScale(opti->play.sprite, size);
    sfSprite_setPosition(opti->play.sprite, pos);
    sfSprite_setTexture(opti->play.sprite, opti->play.texture, sfTrue);
}

void button_volume(t_gbl *opti)
{
    sfVector2f pos = (sfVector2f) {720, 430};
    opti->play.texture = sfTexture_createFromFile("./assets/sprites/button_volume_minus.png", NULL);
    sfVector2f size = {2.5, 2.5};

    opti->play.sprite = sfSprite_create();
    sfSprite_setScale(opti->play.sprite, size);
    sfSprite_setPosition(opti->play.sprite, pos);
    sfSprite_setTexture(opti->play.sprite, opti->play.texture, sfTrue);
}
void button_volume(t_gbl *opti)
{
    sfVector2f pos = (sfVector2f) {720, 430};
    opti->play.texture = sfTexture_createFromFile("./assets/sprites/button_volume_plus.png", NULL);
    sfVector2f size = {2.5, 2.5};

    opti->play.sprite = sfSprite_create();
    sfSprite_setScale(opti->play.sprite, size);
    sfSprite_setPosition(opti->play.sprite, pos);
    sfSprite_setTexture(opti->play.sprite, opti->play.texture, sfTrue);
}
