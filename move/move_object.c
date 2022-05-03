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

void move_ennemy2(struct_object *object);

void move_ninja(struct_object *object, sfRenderWindow *window)
{
    object->ninja.rect.left += 55;
    if (object->ninja.rect.left >= 295)
        object->ninja.rect.left = 25;
    sfSprite_setTextureRect(object->ninja.sprite, object->ninja.rect);
    sfRenderWindow_drawSprite(window, object->ninja.sprite, NULL);
}

void mouvement_x(struct_object *object, sfRenderWindow *window)
{
    object->ninja.position = sfSprite_getPosition(object->ninja.sprite);
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        object->ninja.position.x += 10;
        move_ninja(object, window);
        if (object->ninja.position.x >= 1920.00)
            object->ninja.position.x = 0;
    }
    sfSprite_setPosition(object->ninja.sprite, object->ninja.position);
}

void move_background(struct_object *object, sfRenderWindow *window)
{
    object->background.back.left += 10;
    sfTexture_setRepeated(object->background.background_text, sfTrue);
    sfSprite_setTextureRect(object->background.background, object->background.back);
    sfRenderWindow_drawSprite(window, object->background.background, NULL);
}

void clock(struct_object *object, sfRenderWindow *window)
{
    object->clock.time = sfClock_getElapsedTime(object->clock.clock);
    object->clock.seconds = object->clock.time.microseconds / 1000000.0f;
    if (object->clock.seconds > 0.02) {
        mouvement_x(object, window);
        mouvement_x_back(object, window);
        mouvement_y_up(object, window);
        mouvement_y_down(object, window);
        move_background(object, window);
        move_back2(object, window);
        move_back3(object, window);
        move_back4(object, window);
    }
}

void move_object(struct_object *object, sfRenderWindow *window)
{
    clock(object, window);
}