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
    object->ninja.position = sfSprite_getPosition(object->ninja.sprite);
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        object->ninja.position.x -= 10;
        move_ninja(object, window);
        if (object->ninja.position.x <= -90.00)
            object->ninja.position.x = 0;
    }
    sfSprite_setPosition(object->ninja.sprite, object->ninja.position);
}

void mouvement_y_up(struct_object *object, sfRenderWindow *window)
{
    object->ninja.position = sfSprite_getPosition(object->ninja.sprite);
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        object->ninja.position.y -= 10;
        move_ninja(object, window);
        if (object->ninja.position.y <= -90.00)
            object->ninja.position.y = 900;
    }
    sfSprite_setPosition(object->ninja.sprite, object->ninja.position);
}

void mouvement_y_down(struct_object *object, sfRenderWindow *window)
{
    object->ninja.position = sfSprite_getPosition(object->ninja.sprite);
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        object->ninja.position.y += 10;
        move_ninja(object, window);
        if (object->ninja.position.y >= 1010.00)
            object->ninja.position.y = 900;
    }
    sfSprite_setPosition(object->ninja.sprite, object->ninja.position);
}

void move_back2(struct_object *object, sfRenderWindow *window)
{
    object->back2.back2.left += 2;
    sfTexture_setRepeated(object->back2.back_text2, sfTrue);
    sfSprite_setTextureRect(object->back2.back2_s, object->back2.back2);
    sfRenderWindow_drawSprite(window, object->back2.back2_s, NULL);
}

void move_back3(struct_object *object, sfRenderWindow *window)
{
    object->back3.back3.left += 4;
    sfTexture_setRepeated(object->back3.back_text3, sfTrue);
    sfSprite_setTextureRect(object->back3.back3_s, object->back3.back3);
    sfRenderWindow_drawSprite(window, object->back3.back3_s, NULL);
}

void move_back4(struct_object *object, sfRenderWindow *window)
{
    object->back4.back4.left += 6;
    sfTexture_setRepeated(object->back4.back_text4, sfTrue);
    sfSprite_setTextureRect(object->back4.back4_s, object->back4.back4);
    sfRenderWindow_drawSprite(window, object->back4.back4_s, NULL);
}