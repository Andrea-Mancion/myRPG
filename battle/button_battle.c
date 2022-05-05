/*
** EPITECH PROJECT, 2022
** button_battle.c
** File description:
** create and use the button
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include "../includes/my_rpg.h"
#include "../includes/my_lib.h"
#include "../includes/my.h"

static struct_charachter which_button_click(struct_object *obj, sfVector2i mouse_pos, struct_charachter foe)
{
    if (mouse_pos.x <= 762) {
        foe.health -= obj->stat->strenght / 2;
            printf("force %d\n", obj->stat->strenght);
    } else if (mouse_pos.x >= 1048) {
        foe.health -= obj->stat->wisdom / 2;
            printf("magie %d\n", obj->stat->wisdom);
    }
    else if (mouse_pos.x >= 845 && mouse_pos.x <= 1000) {
        foe.health -= obj->stat->dext / 2;
            printf("dext %d\n", obj->stat->dext);
    }
    return foe;
}

struct_charachter create_button_battle(struct_object *obj, struct_charachter foe)
{
    sfVector2i mouse_pos;

    if (obj->event.event.type == sfEvtMouseButtonPressed) {
        mouse_pos = sfMouse_getPosition((const sfWindow *)obj->window.window);
        if (mouse_pos.y >= 950 && mouse_pos.y <= 1000 && mouse_pos.x >= 620 && mouse_pos.x <= 1100)
            foe = which_button_click(obj, mouse_pos, foe);
    }
    return foe;
}
