/*
** EPITECH PROJECT, 2022
** start_battle.c
** File description:
** start the battle and go until one die
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include "../includes/my_rpg.h"
#include "../includes/my_lib.h"
#include "../includes/my.h"

void put_text_in_battle(struct_object *object, struct_charachter foe);

void start_battle(struct_object *obj, struct_charachter foe)
{
    if (foe.health <= 0 || obj->stat->health <= 0) {
        obj->battle.battle_beg = false;
        return;
    }
    put_text_in_battle(obj, foe);
}
