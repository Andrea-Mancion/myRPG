/*
** EPITECH PROJECT, 2022
** B-MUL-200-REN-2-1-myrpg-ludwig.vandenberghe
** File description:
** setview
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include "../includes/my_rpg.h"
#include "../includes/my.h"

void set_view(struct_object *object, sfRenderWindow *window)
{
    object->hero.view = sfView_create();
    sfView_setCenter(object->hero.view, object->hero.position);
    sfView_setSize(object->hero.view, (sfVector2f) {960, 540});
    sfRenderWindow_setView(window, object->hero.view);
}

void set_view_battle(struct_object *object, sfRenderWindow *window)
{
    object->hero.view = sfView_create();
    sfView_setCenter(object->hero.view, (sfVector2f) {960, 540});
    sfView_setSize(object->hero.view, (sfVector2f) {1920, 1080});
    sfRenderWindow_setView(window, object->hero.view);
}
