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
#include "../includes/my_rpg.h"
#include "../includes/my.h"

void create_clock(struct_object *object);
void create_music(struct_object *object);
void create_ennemy(struct_object *object);
void create_ennemy2(struct_object *object);
void create_back2(struct_object *object);
void create_back3(struct_object *object);
void create_back4(struct_object *object);

void create_ninja(struct_object *object)
{
    object->hero.texture =
    sfTexture_createFromFile("assets/sprites/images.png", NULL);
    object->hero.sprite = sfSprite_create();
    object->hero.position.x = 0;
    object->hero.position.y = 900;
    sfSprite_setTexture(object->hero.sprite, object->hero.texture, sfTrue);
    sfSprite_setPosition(object->hero.sprite, object->hero.position);
    object->hero.rect.top = 0;
    object->hero.rect.left = 25;
    object->hero.rect.width = 50;
    object->hero.rect.height = 78;
    sfSprite_setTextureRect(object->hero.sprite, object->hero.rect);
}

void create_background(struct_object *object)
{
    object->background.background_text =
    sfTexture_createFromFile("assets/sprites/map.png", NULL);
    object->background.background = sfSprite_create();
    sfSprite_setTexture(object->background.background,
    object->background.background_text, sfTrue);
    object->background.back.top = 500;
    object->background.back.left = 0;
    object->background.back.width = 1920;
    object->background.back.height = 1080;
    sfSprite_setTextureRect(object->background.background,
    object->background.back);
}

sfRenderWindow *create_window(struct_object *object)
{
    object->window.mode.width = 1920;
    object->window.mode.height = 1080;
    object->window.mode.bitsPerPixel = 32;
    object->window.window = sfRenderWindow_create(object->window.mode,
    "j'adore la csfml", sfClose,  NULL);

    return (object->window.window);
}

void destroy(struct_object *object, sfRenderWindow *window)
{
    sfRenderWindow_destroy(window);
    if (object->play == 2) {
        sfSprite_destroy(object->hero.sprite);
        sfTexture_destroy(object->hero.texture);
        sfSprite_destroy(object->background.background);
        sfTexture_destroy(object->background.background_text);
        sfText_destroy(object->text_invetory.text_invent);
        sfText_destroy(object->text_stat.text_invent);
        sfText_destroy(object->text_pause.text_invent);
        sfClock_destroy(object->clock.clock);
        sfClock_destroy(object->clock_battle.clock);
        sfMusic_destroy(object->music.music);
        sfSprite_destroy(object->but_continue.sprite);
        sfTexture_destroy(object->but_continue.texture);
        sfSprite_destroy(object->but_exit.sprite);
        sfTexture_destroy(object->but_exit.texture);
        sfSprite_destroy(object->battle.battle_back.background);
        sfTexture_destroy(object->battle.battle_back.background_text);
        sfSprite_destroy(object->balk_anny.sprite);
        sfTexture_destroy(object->balk_anny.texture);
    }
}

void create_object(struct_object *object)
{
    create_background(object);
    create_ninja(object);
    create_music(object);
    create_inventory(object);
    create_text_inventory(object);
    create_clock(object);
    create_stat(object);
}