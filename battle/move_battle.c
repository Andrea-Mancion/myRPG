/*
** EPITECH PROJECT, 2022
** move_battle.c
** File description:
** move sprites for the battle
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include "../includes/my_rpg.h"
#include "../includes/my_lib.h"
#include "../includes/my.h"

static void move_foe(struct_object *object, struct_charachter foe)
{
    foe.rect.left += 50;
    sfSprite_setTextureRect(foe.sprite, foe.rect);
    sfRenderWindow_drawSprite(object->window.window, foe.sprite, NULL);
}

static void move_hero(struct_object *object)
{
    object->hero.rect.left += 55;
    if (object->hero.rect.left >= 295)
        object->hero.rect.left = 25;
    sfSprite_setTextureRect(object->hero.sprite, object->hero.rect);
    sfRenderWindow_drawSprite(object->window.window, object->hero.sprite,
    NULL);
}

static void clock_battle(struct_object *object, struct_charachter foe)
{
    object->clock_battle.time =
    sfClock_getElapsedTime(object->clock_battle.clock);
    object->clock_battle.seconds = object->clock_battle.time.microseconds /
    1000000.0f;
    if (object->clock_battle.seconds > 0.2) {
        move_foe(object, foe);
        move_hero(object);
        sfClock_restart(object->clock_battle.clock);
    }
}

void move_battle(struct_object *object, struct_charachter foe)
{
    clock_battle(object, foe);
}
