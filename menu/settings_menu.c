/*
** EPITECH PROJECT, 2021
** my_defender.c
** File description:
** main and help of my_runner
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include "includes/my_rpg.h"
#include "includes/my_lib.h"
#include <stdio.h>

void background_settings(t_gbl *opti)
{
    opti->backg.texture =
    sfTexture_createFromFile("./sprite/my_defender.png", NULL);
    sfVector2f size = {3.7, 3.6};
    opti->backg.sprite = sfSprite_create();
    sfSprite_setScale(opti->backg.sprite, size);
    sfSprite_setTexture(opti->backg.sprite, opti->backg.texture, sfTrue);
}

void button_volume(t_gbl *opti)
{
    sfVector2f pos = (sfVector2f) {820, 430};
    opti->volume.texture =
    sfTexture_createFromFile("./sprite/button_volume.png", NULL);
    sfVector2f size = {0.5, 0.5};

    opti->volume.sprite = sfSprite_create();
    sfSprite_setScale(opti->volume.sprite, size);
    sfSprite_setPosition(opti->volume.sprite, pos);
    sfSprite_setTexture(opti->volume.sprite, opti->volume.texture, sfTrue);
}

int settings()
{
}
