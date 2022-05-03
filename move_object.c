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
#include "includes/my_rpg.h"
#include "my.h"

void move_ennemy2(struct_object *object);
void move_back2(struct_object *object);
void move_back3(struct_object *object);
void move_back4(struct_object *object);
void hit_box(struct_object *object);

void move_ninja(struct_object *object)
{
    object->ninja.rect.left += 55;
    if (object->ninja.rect.left >= 295)
        object->ninja.rect.left = 25;
    sfSprite_setTextureRect(object->ninja.sprite, object->ninja.rect);
    sfRenderWindow_drawSprite(object->window.window, object->ninja.sprite, NULL);
}

void mouvement_x(struct_object *object)
{
    object->ninja.position = sfSprite_getPosition(object->ninja.sprite);
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        object->ninja.position.x += 10;
        move_ninja(object);
        if (object->ninja.position.x >= 1920.00)
            object->ninja.position.x = 0;
    }
    sfSprite_setPosition(object->ninja.sprite, object->ninja.position);
}

void move_background(struct_object *object)
{
    object->background.back.left += 10;
    sfTexture_setRepeated(object->background.background_text, sfTrue);
    sfSprite_setTextureRect(object->background.background, object->background.back);
    sfRenderWindow_drawSprite(object->window.window, object->background.background, NULL);
}

void clock(struct_object *object)
{
    object->clock.time = sfClock_getElapsedTime(object->clock.clock);
    object->clock.seconds = object->clock.time.microseconds / 1000000.0f;
    if (object->clock.seconds > 0.02) {
        mouvement_x(object);
        mouvement_x_back(object);
        mouvement_y_up(object);
        mouvement_y_down(object);
        move_background(object);
        move_back2(object);
        move_back3(object);
        move_back4(object);
    }
}

void move_object(struct_object *object)
{
    clock(object);
}