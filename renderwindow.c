/*
** EPITECH PROJECT, 2021
** create_object
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

void render_window(struct_object *object)
{
    sfRenderWindow_setFramerateLimit(object->window.window, 60);
    sfRenderWindow_drawSprite(object->window.window, object->background.background, NULL);
    sfRenderWindow_drawSprite(object->window.window, object->back2.back2_s, NULL);
    sfRenderWindow_drawSprite(object->window.window, object->back3.back3_s, NULL);
    sfRenderWindow_drawSprite(object->window.window, object->back4.back4_s, NULL);
    sfRenderWindow_drawSprite(object->window.window, object->ninja.sprite, NULL);
    if (object->print == true) {
        sfRenderWindow_drawText(object->window.window, object->text.text_invent, NULL);
        print_inventory(object);
    }
    if (object->game_over.counter2 == 1)
        sfRenderWindow_drawSprite(object->window.window, object->game_over.game_s, NULL);
    sfRenderWindow_display(object->window.window);
}