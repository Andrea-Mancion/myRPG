/*
** EPITECH PROJECT, 2022
** upgrade_stat.c
** File description:
** upgrade_stat when click
*/

#include <stdio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Window/Mouse.h>
#include <stdlib.h>
#include <SFML/Window/Export.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "../includes/my_rpg.h"
#include <SFML/Audio.h>
#include <SFML/Audio/Music.h>

// void upgrade_stat(stats_t *stat)
// {
//     if (stat->nbr_of_point == 0)
//         return;
//     if (stat == 1 || stat == 2) {
//         if (stat == 1)
//             stat->stat->dext++;
//         if (stat == 2)
//             stat->stat->health++;
//     }
//     if (stat == 3 || stat == 4) {
//         if (stat == 3)
//             stat->stat->luck++;
//         if (stat == 4)
//             stat->stat->strenght++;
//     }
//     if (stat == 5)
//         stat->stat->wisdom++;
//     stat->nbr_of_point--;
// }
