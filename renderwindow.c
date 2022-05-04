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
#include "includes/my.h"

void render_window(struct_object *object, sfRenderWindow *window)
{
    sfRenderWindow_setFramerateLimit(window, 60);
    sfRenderWindow_drawSprite(window, object->background.background, NULL);
    sfRenderWindow_drawSprite(window, object->back2.back2_s, NULL);
    sfRenderWindow_drawSprite(window, object->back3.back3_s, NULL);
    sfRenderWindow_drawSprite(window, object->back4.back4_s, NULL);
    sfRenderWindow_drawSprite(window, object->ninja.sprite, NULL);
    if (object->print_inventory == true) {
        sfRenderWindow_drawText(window, object->text_invetory.text_invent,
        NULL);
        print_inventory(object, window);
    }
    if (object->print_stat == true) {
        sfRenderWindow_drawText(window, object->text_stat.text_invent, NULL);
        print_stat(object, window);
        for (int x = 0; x < 7; x++)
            sfRenderWindow_drawText(window,
            object->text_number_stat[x]->text_invent, NULL);
    }
    if (object->print_pause == true) {
        sfRenderWindow_drawText(window, object->text_pause.text_invent, NULL);
        sfRenderWindow_drawSprite(window, object->but_continue.sprite, NULL);
        sfRenderWindow_drawSprite(window, object->but_exit.sprite, NULL);
        click_but(window, object->event.event, object);
    }
    sfRenderWindow_display(window);
}