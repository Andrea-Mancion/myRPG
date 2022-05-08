/*
** EPITECH PROJECT, 2022
** print_dialogue.c
** File description:
** print the dialogue
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../includes/my_rpg.h"
#include "../includes/button.h"
#include "../includes/my.h"
#include "../includes/my_rpg.h"

void print_dialogue_wife(struct_object *object)
{
    if (object->dialogue_wife.can_print == true) {
        sfRenderWindow_drawText(object->window.window, object->dialogue_wife.text_wife.text_invent, NULL);
        sfRenderWindow_drawText(object->window.window, object->dialogue_wife.text_hero.text_invent, NULL);
    }
}

void print_dialogue_balk_anny(struct_object *object)
{
    if (object->dialogue_balk_anny.can_print == true && object->balk_anny.death == false) {
        sfRenderWindow_drawText(object->window.window, object->dialogue_balk_anny.text_balk_anny.text_invent, NULL);
        sfRenderWindow_drawText(object->window.window, object->dialogue_balk_anny.text_hero.text_invent, NULL);
    }
}
