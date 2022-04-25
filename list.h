/*
** EPITECH PROJECT, 2021
** list.h
** File description:
** for structure
*/

#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <math.h>
#include <stdio.h>
#include <stdbool.h>

#ifndef LIST_H_
    #define LIST_H_

typedef struct ninja
{
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f position;
    int counter;
} struct_ninja;

typedef struct clock
{
    sfTime time;
    sfClock *clock;
    float seconds;
} struct_clock;

typedef struct background
{
    sfSprite *background;
    sfTexture *background_text;
    sfIntRect back;
    sfVector2f pos;
} struct_background;

typedef struct back2
{
    sfSprite *back2_s;
    sfTexture *back_text2;
    sfIntRect back2;
    sfVector2f back2_scale;
} struct_background2;

typedef struct back3
{
    sfSprite *back3_s;
    sfTexture *back_text3;
    sfIntRect back3;
    sfVector2f back3_scale;
} struct_background3;

typedef struct back4
{
    sfSprite *back4_s;
    sfTexture *back_text4;
    sfIntRect back4;
    sfVector2f back4_scale;
} struct_background4;

typedef struct window
{
    sfVideoMode mode;
    sfRenderWindow *window;
} struct_window;

typedef struct music
{
    sfMusic *music;
} struct_music;

typedef struct ennemy
{
    sfSprite *sprite_ennemy;
    sfTexture *texture_ennemy;
    sfIntRect rect_ennemy;
    sfVector2f position_ennemy;
    sfVector2f scale;
} struct_ennemy;

typedef struct ennemy2
{
    sfSprite *sprite_ennemy2;
    sfTexture *texture_ennemy2;
    sfIntRect rect_ennemy2;
    sfVector2f position_ennemy2;
    sfVector2f scale2;
} struct_ennemy2;

typedef struct event
{
    sfEvent event;
} struct_event;

typedef struct game_over
{
    sfSprite *game_s;
    sfTexture *game_text;
    sfIntRect game;
    sfVector2f game_scale;
    int counter2;
} struct_game;

typedef struct text
{
    sfText *text_invent;
    sfFont *font_text_invent;
} struct_text;

typedef struct baguette {
    sfSprite *baguette_s;
    sfTexture *baguette_t;
    sfIntRect baguette_r;
    sfVector2f pos_baguette;
} struct_baguette;

typedef struct inventory {
    sfSprite *inv_s;
    sfTexture *inv_t;
    sfIntRect inv_r;
    sfVector2f pos;
    struct_baguette *baguette;
    bool used;
} struct_inventory;

typedef struct object
{
    struct_ninja ninja;
    struct_clock clock;
    struct_window window;
    struct_background background;
    struct_background2 back2;
    struct_background3 back3;
    struct_background4 back4;
    struct_music music;
    struct_ennemy ennemy;
    struct_ennemy2 ennemy2;
    struct_event event;
    struct_game game_over;
    struct_text text;
    struct_inventory **inventory;
} struct_object;

#endif /* !LIST_H_ */
