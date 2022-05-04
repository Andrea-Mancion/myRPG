/*
** EPITECH PROJECT, 2021
** my_defender.c
** File description:
** main and help of my_defender
*/

#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdbool.h>
#include "includes/my_rpg.h"
#include "includes/my_lib.h"
#include "includes/my.h"
#include <stdio.h>

int menu_defender(struct_object *object)
{
    t_gbl opti;
    background(&opti);
    play(&opti);
    button_settings(&opti);
    button_quit(&opti);

    sfVideoMode mode = {1920, 1080, 32};
    sfRenderWindow* window;
    sfEvent event;

    window = sfRenderWindow_create(mode, "Main Menu", sfResize | sfClose, NULL);

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        sfRenderWindow_clear(window, sfWhite);
        sfRenderWindow_drawSprite(window, opti.backg.sprite, NULL);
        sfRenderWindow_drawSprite(window, opti.play.sprite, NULL);
        sfRenderWindow_drawSprite(window, opti.set_tings.sprite, NULL);
        sfRenderWindow_drawSprite(window, opti.quit.sprite, NULL);
        sfRenderWindow_display(window);
        pos_play(window, &event, object);
        pos_settings(window, &event);
        pos_quit(window, &event);
    }
    destroy(object, window);
    return 0;
}

static int print_help (void)
{
    my_putstr("my_rpg - Baguette The Quest\n");
    return 0;
}

int main(int ac, char **av)
{
    //t_gbl gbl;
    struct_object *object = malloc(sizeof(struct_object));

    if ((ac == 2) && (av[1][0] == '-') && (av[1][1] == 'h'))
        return print_help();
    else if (ac != 1) {
        my_putstr("Usage: my_defender [-h]\n");
        return 0;
    }
    /*if (init_music(&gbl)) {
        my_putstr("Error during initialization\n");
        return 84;
    }*/
    menu_defender(object);
    return 0;
}
