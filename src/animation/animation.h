/*
** EPITECH PROJECT, 2022
** animation.h
** File description:
** animation
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdlib.h>

#ifndef ANIMATION_H_
    #define ANIMATION_H_

typedef struct animation_s {
    sfSprite *spri;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f position;
    int counter;
} animation_t;

typedef struct struct_clock  {
    sfTime time;
    sfClock *clock;
    float seconds;
} struct_clock;

typedef struct window_s {
    sfVideoMode mode;
    sfEvent event;
    sfRenderWindow *window;
}window_t;

typedef struct object_s {
    animation_t *carac;
    struct_clock *clock;
    window_t *window;
} object_t;

#endif
