/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** main_carac
*/

#include "../animation.h"

void create_warrior(object_t *object)
{
    object->carac->texture = sfTexture_createFromFile("sprite_rpg/warrior.png",
     NULL);
    object->carac->spri = sfSprite_create();
    object->carac->position.x = 400;
    object->carac->position.y = 500;
    sfSprite_setTexture(object->carac->spri, object->carac->texture, sfTrue);
    sfSprite_setPosition(object->carac->spri, object->carac->position);
    object->carac->rect.top = 0;
    object->carac->rect.left = 0;
    object->carac->rect.width = 38;
    object->carac->rect.height = 45;
    sfSprite_setTextureRect(object->carac->spri, object->carac->rect);
}

void move_carac(object_t *object)
{
    object->carac->rect.left += 38;
    if (object->carac->rect.left >= 114)
        object->carac->rect.left = 0;
    sfSprite_setTextureRect(object->carac->spri, object->carac->rect);
    sfRenderWindow_drawSprite(object->window->window, object->carac->spri, NULL);
}
void mouvement_backward(object_t *object)
{
    object->carac->position = sfSprite_getPosition(object->carac->spri);
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        object->carac->rect.top = 45;
        object->carac->position.x -= 1;
        move_carac(object);
        if (object->carac->position.x >= 1920.00)
            object->carac->position.x = 0;
    }
    sfSprite_setPosition(object->carac->spri, object->carac->position);
}
void mouvement_forward(object_t *object)
{
    object->carac->position = sfSprite_getPosition(object->carac->spri);
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        object->carac->rect.top = 90;
        object->carac->position.x += 1;
        move_carac(object);
        if (object->carac->position.x <= -90.00)
            object->carac->position.x = 0;
    }
    sfSprite_setPosition(object->carac->spri, object->carac->position);
}
void mouvement_upward(object_t *object)
{
    object->carac->position = sfSprite_getPosition(object->carac->spri);
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        object->carac->rect.top = 135;
        object->carac->position.y -= 1;
        move_carac(object);
        if (object->carac->position.y <= -90.00)
            object->carac->position.y = 900;
    }
    sfSprite_setPosition(object->carac->spri, object->carac->position);
}
void mouvement_downward(object_t *object)
{
    object->carac->position = sfSprite_getPosition(object->carac->spri);
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        object->carac->rect.top = 0;
        object->carac->position.y += 1;
        move_carac(object);
        if (object->carac->position.y >= 1010.00)
            object->carac->position.y = 900;
    }
    sfSprite_setPosition(object->carac->spri, object->carac->position);
}

void essaie(object_t *object)
{
    sfRenderWindow_drawSprite(object->window->window, object->carac->spri, NULL);
    mouvement_backward(object);
    mouvement_downward(object);
    mouvement_forward(object);
    mouvement_upward(object);
}