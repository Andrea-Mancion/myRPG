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
    object->ninja.texture =
    sfTexture_createFromFile("assets/sprites/images.png", NULL);
    object->ninja.sprite = sfSprite_create();
    object->ninja.position.x = 0;
    object->ninja.position.y = 900;
    sfSprite_setTexture(object->ninja.sprite, object->ninja.texture, sfTrue);
    sfSprite_setPosition(object->ninja.sprite, object->ninja.position);
    object->ninja.rect.top = 0;
    object->ninja.rect.left = 25;
    object->ninja.rect.width = 50;
    object->ninja.rect.height = 78;
    sfSprite_setTextureRect(object->ninja.sprite, object->ninja.rect);
}

void create_background(struct_object *object)
{
    object->background.background_text =
    sfTexture_createFromFile("ressource/back1.png", NULL);
    object->background.background = sfSprite_create();
    sfSprite_setTexture(object->background.background,
    object->background.background_text, sfTrue);
    object->background.back.top = 0;
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
        sfSprite_destroy(object->ninja.sprite);
        sfTexture_destroy(object->ninja.texture);
        sfSprite_destroy(object->background.background);
        sfTexture_destroy(object->background.background_text);
        sfText_destroy(object->text_invetory.text_invent);
        sfText_destroy(object->text_stat.text_invent);
        sfText_destroy(object->text_pause.text_invent);
        sfClock_destroy(object->clock.clock);
        sfMusic_destroy(object->music.music);
        sfSprite_destroy(object->but_continue.sprite);
        sfTexture_destroy(object->but_continue.texture);
        sfSprite_destroy(object->but_exit.sprite);
        sfTexture_destroy(object->but_exit.texture);
        sfSprite_destroy(object->battle.battle_back.background);
        sfTexture_destroy(object->battle.battle_back.background_text);
        sfSprite_destroy(object->battle.foe.sprite);
        sfTexture_destroy(object->battle.foe.texture);
    }
}

void create_object(struct_object *object)
{
    create_background(object);
    create_back2(object);
    create_back3(object);
    create_back4(object);
    create_ninja(object);
    create_music(object);
    create_inventory(object);
    create_text_inventory(object);
    create_clock(object);
    create_stat(object);
}