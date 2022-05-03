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
#include "list.h"

int my_putstr(char *str);
void game_over(struct_object *object);

void hit_box(struct_object *object)
{
    if (object->ninja.position.x == object->ennemy.position_ennemy.x
        && object->ninja.position.y >= 700) {
            object->game_over.counter2 = 1;
            sfMusic_destroy(object->music.music);
            object->music.music = sfMusic_createFromFile("game_over.ogg");
            sfMusic_setVolume(object->music.music, 100);
            sfMusic_play(object->music.music);
    }
    else if (object->ninja.position.x == object->ennemy2.position_ennemy2.x
        && object->ninja.position.y >= 700) {
            object->game_over.counter2 = 1;
            sfMusic_destroy(object->music.music);
            object->music.music = sfMusic_createFromFile("game_over.ogg");
            sfMusic_setVolume(object->music.music, 100);
            sfMusic_play(object->music.music);
    }
}