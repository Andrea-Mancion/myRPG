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
#include <stdio.h>

int menu_defender(void)
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
        pos_play(window, &event);
        pos_settings(window, &event);
        pos_quit(window, &event);
    }
    return 0;
}

static int print_help (void)
{
    my_putstr("My_defender - Tower Defense\n");
    my_putstr("• The player is a builder who must defend his castle,\n");
    my_putstr("• Enemy waves will regularly appear from one side of ");
    my_putstr("the playground,\n");
    my_putstr("• The player must buy and place buildings on the playground ");
    my_putstr("grid to block/kill enemies,\n");
    my_putstr("• Buildings can be offensive (towers attacking) or defensive ");
    my_putstr("(basic walls),\n");
    my_putstr("• When the castle is reached by an enemy, it takes damages,\n");
    my_putstr("• If the castle reaches 0 hit points the player loose.\n");
    return 0;
}

int main(int ac, char **av)
{
    t_gbl gbl;

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
    menu_defender();
    return 0;
}
