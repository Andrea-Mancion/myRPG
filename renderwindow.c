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
    sfRenderWindow_drawSprite(window, object->hero.sprite, NULL);
    sfRenderWindow_drawSprite(window, object->balk_anny_game.sprite, NULL);
    sfRenderWindow_drawSprite(window, object->blob.sprite, NULL);
    if (object->battle.battle_beg == true) {
        print_battle(object, object->balk_anny);
    }
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
    if (object->over == true) {
        sfRenderWindow_drawSprite(window, object->game_over.background, NULL);
        sfRenderWindow_drawSprite(window, object->but_over.sprite, NULL);
        pos_over(window, &object->event.event, object);
    }
    sfRenderWindow_display(window);
}