/*
** EPITECH PROJECT, 2021
** my_runner.h
** File description:
** structure
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <stdbool.h>

#ifndef MY_RPG_H_INCLUDED
    #define MY_RPG_H_INCLUDED

typedef struct trucs {
    int x;
    int y;
    int size_x;
    int size_y;
    sfTexture *texture;
    sfSprite *sprite;
} trucs;

typedef struct button_play {
    int x;
    int y;
    int size_x;
    int size_y;
    sfTexture *texture;
    sfSprite *sprite;
} button_play;

typedef struct button_set_tings {
    int x;
    int y;
    int size_x;
    int size_y;
    sfTexture *texture;
    sfSprite *sprite;
} button_set_tings;

typedef struct btn_volume {
    int x;
    int y;
    int size_x;
    int size_y;
    sfTexture *texture;
    sfSprite *sprite;
} btn_volume;

typedef struct btn_quit {
    int x;
    int y;
    int size_x;
    int size_y;
    sfTexture *texture;
    sfSprite *sprite;
} btn_quit;

typedef struct s_object {
    sfSprite *sprt;
    sfTexture *texture;
    sfIntRect rect_anim;
    int anim_size;
    int anim_width;
    sfIntRect rect;
    sfVector2f speed;
    sfVector2f pos;
} t_object;

typedef struct s_game {
    sfMusic *music;
    sfEvent event;
    sfVideoMode mode;
    sfClock *clock;
    int frame_rate;
    int num_player;
} t_game;

typedef struct s_gbl {
        trucs backg;
        button_play play;
        button_set_tings set_tings;
        btn_volume volume;
        btn_quit quit;
        t_game game;
        t_object player;
} t_gbl;

void background(t_gbl *opti);
void title_menu(t_gbl *opti);
void background_settings(t_gbl *opti);

void play(t_gbl *opti);
void button_settings(t_gbl *opti);
void button_volume(t_gbl *opti);
void button_quit(t_gbl *opti);

void pos_play(sfRenderWindow* window, sfEvent *event);
void pos_settings(sfRenderWindow* window, sfEvent *event);
void pos_quit(sfRenderWindow* window, sfEvent *event);

int menu_defender(void);
int init_music(t_gbl *gbl);
void move_rect(sfIntRect *rect, int offset, int max_value);

void init_player_struct(t_gbl *gbl);
void anim_player(t_gbl *gbl);
void new_player(t_gbl *gbl);
int init_game_struct (t_gbl *gbl);
int init_sprites(t_gbl *gbl);

void close_graphics (t_gbl *gbl);
int window_settings(t_gbl *gbl);

#endif
