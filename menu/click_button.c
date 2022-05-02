/*
** EPITECH PROJECT, 2022
** click_button.c
** File description:
** game button
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../includes/my_rpg.h"
#include "../includes/button.h"

int second_window(int ac, char **av);

void pos_play(sfRenderWindow* window, sfEvent *event)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)window);

    if (mouse_pos.y >= 416 && mouse_pos.y <= 442) {
        if (mouse_pos.x >= 730 && mouse_pos.x <= 1098) {
            while (sfRenderWindow_pollEvent(window, event)) {
                if (event->type == sfEvtMouseButtonPressed) {
                    // second_window();
                    break;
                }
            }
        }
    }
}

void pos_settings(sfRenderWindow* window, sfEvent *event)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)window);

    if (mouse_pos.y >= 350 && mouse_pos.y <= 472) {
        if (mouse_pos.x >= 853 && mouse_pos.x <= 1072) {
            //printf("Mouse-position %d, %d", mouse_pos.x, mouse_pos.y);
            while (sfRenderWindow_pollEvent(window, event)) {
                if (event->type == sfEvtMouseButtonPressed) {
                    // window_settings();
                    break;
                }
            }
        }
    }
}

void pos_quit(sfRenderWindow* window, sfEvent *event)
{
    sfVector2i mouse_pos = sfMouse_getPosition((const sfWindow *)window);

    if (mouse_pos.y >= 550 && mouse_pos.y <= 723) {
        if (mouse_pos.x >= 735 && mouse_pos.x <= 1099) {
            while (sfRenderWindow_pollEvent(window, event)) {
                if (event->type == sfEvtMouseButtonPressed) {
                    sfRenderWindow_close(window);
                    break;
                }
            }
        }
    }
}
