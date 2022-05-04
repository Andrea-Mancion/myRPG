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
    object->hero.rect.left += 55;
    if (object->hero.rect.left >= 295)
        object->hero.rect.left = 25;
    sfSprite_setTextureRect(object->hero.sprite, object->hero.rect);
    sfRenderWindow_drawSprite(window, object->hero.sprite, NULL);
}

void mouvement_x(struct_object *object, sfRenderWindow *window)
{
    object->hero.position = sfSprite_getPosition(object->hero.sprite);
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        object->hero.position.x += 10;
        move_ninja(object, window);
        if (object->hero.position.x >= 1920.00)
            object->hero.position.x = 0;
    }
    sfSprite_setPosition(object->hero.sprite, object->hero.position);
}

void move_background(struct_object *object, sfRenderWindow *window)
{
    object->background.back.left += 10;
    sfTexture_setRepeated(object->background.background_text, sfTrue);
    sfSprite_setTextureRect(object->background.background,
    object->background.back);
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
    if (object->print_pause == false || object->battle.battle_beg == false)
        clock(object, window);
}