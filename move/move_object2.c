/*
** EPITECH PROJECT, 2021
** move_object
** File description:
** for runner
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include "../includes/my_rpg.h"
#include "../includes/my.h"

void mouvement_x_back(struct_object *object, sfRenderWindow *window)
{
    object->hero.position = sfSprite_getPosition(object->hero.sprite);
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        object->hero.position.x -= 10;
        move_ninja(object, window);
        if (object->hero.position.x <= -90.00)
            object->hero.position.x = 0;
    }
    sfSprite_setPosition(object->hero.sprite, object->hero.position);
}

void mouvement_y_up(struct_object *object, sfRenderWindow *window)
{
    object->hero.position = sfSprite_getPosition(object->hero.sprite);
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        object->hero.position.y -= 10;
        move_ninja(object, window);
        if (object->hero.position.y <= -90.00)
            object->hero.position.y = 900;
    }
    sfSprite_setPosition(object->hero.sprite, object->hero.position);
}

void mouvement_y_down(struct_object *object, sfRenderWindow *window)
{
    object->hero.position = sfSprite_getPosition(object->hero.sprite);
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        object->hero.position.y += 10;
        move_ninja(object, window);
        if (object->hero.position.y >= 1010.00)
            object->hero.position.y = 900;
    }
    sfSprite_setPosition(object->hero.sprite, object->hero.position);
}
