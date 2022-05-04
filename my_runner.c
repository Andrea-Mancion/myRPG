/*
** EPITECH PROJECT, 2021
** my_runner
** File description:
** un géométrie dash
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include "includes/my_rpg.h"
#include "includes/my.h"

int my_putchar(char c);
int my_putstr(char *str);

static void analyse_events(sfRenderWindow *window, sfEvent event,
struct_object *object)
{
    object->balk_anny.health = 10;
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
    if (sfKeyboard_isKeyPressed(sfKeyI))
        object->print_inventory = true;
    if (sfKeyboard_isKeyPressed(sfKeyC))
        object->print_stat = true;
    if (sfKeyboard_isKeyPressed(sfKeyY))
        start_battle(object);
    if ((object->print_inventory == true || object->print_stat == true) &&
        sfKeyboard_isKeyPressed(sfKeyM)) {
        object->print_inventory = false;
        object->print_stat = false;
    }
    if (object->print_inventory == false && object->print_stat == false &&
    sfKeyboard_isKeyPressed(sfKeyEscape))
        object->print_pause = true;
}

int second_window(struct_object *object, sfRenderWindow *window)
{
    object->window.window = window;
    if (object->create == false) {
        object->print_inventory = false;
        object->print_stat = false;
        object->print_pause = false;
        object->battle.battle_beg = false;
        create_object(object);
        create_inventory(object);
        create_button(object);
        object->create = true;
    }
    move_object(object, window);
    render_window(object, window);
    while (sfRenderWindow_pollEvent(window, &object->event.event))
        analyse_events(window, object->event.event, object);
    return (0);
}
