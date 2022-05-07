/*
** EPITECH PROJECT, 2021
** nackground_menu.c
** File description:
** background menu of my_defender
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include <stdio.h>
#include "../includes/my_rpg.h"
#include "../includes/my_lib.h"

void background_settings(t_gbl *opti)
{
    opti->backg.texture = sfTexture_createFromFile("./assets/sprites/background_menu.png", NULL);
    sfVector2f size = {2.4, 2.5};
    opti->backg.sprite = sfSprite_create();
    sfSprite_setScale(opti->backg.sprite, size);
    sfSprite_setTexture(opti->backg.sprite, opti->backg.texture, sfTrue);
}
