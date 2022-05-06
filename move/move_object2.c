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
        object->hero.rect.top = 45;
        object->hero.position.x -= 10;
        move_warrior(object, window);
    }
    sfSprite_setPosition(object->hero.sprite, object->hero.position);
}

void mouvement_y_up(struct_object *object, sfRenderWindow *window)
{
    object->hero.position = sfSprite_getPosition(object->hero.sprite);
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        object->hero.rect.top = 135;
        object->hero.position.y -= 10;
        move_warrior(object, window);
    }
    sfSprite_setPosition(object->hero.sprite, object->hero.position);
}

void mouvement_y_down(struct_object *object, sfRenderWindow *window)
{
    object->hero.position = sfSprite_getPosition(object->hero.sprite);
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        object->hero.rect.top = 0;
        object->hero.position.y += 10;
        move_warrior(object, window);
    }
    sfSprite_setPosition(object->hero.sprite, object->hero.position);
}

void move_idle_balk(struct_object *obj)
{
    obj->balk_anny_game.rect.left += 43;
    if (obj->balk_anny_game.rect.left >= 100)
        obj->balk_anny_game.rect.left = 0;
    sfSprite_setTextureRect(obj->balk_anny_game.sprite,
    obj->balk_anny_game.rect);
    sfRenderWindow_drawSprite(obj->window.window, obj->balk_anny_game.sprite,
    NULL);
}

void move_blob(struct_object *obj)
{
    obj->blob.rect.left += 60;
    if (obj->blob.rect.left >= 720)
        obj->blob.rect.left = 0;
    sfSprite_setTextureRect(obj->blob.sprite, obj->blob.rect);
    sfRenderWindow_drawSprite(obj->window.window, obj->blob.sprite, NULL);
}