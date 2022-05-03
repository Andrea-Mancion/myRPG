/*
** EPITECH PROJECT, 2022
** stat.c
** File description:
** attribute the stat in func of the class
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
#include <SFML/Audio.h>
#include <SFML/Audio/Music.h>
#include "../includes/my_rpg.h"

static void give_stat_warrior(stats_t *stat)
{
    stat->strenght = 0;
    stat->dext = 0;
    stat->luck = -1;
    stat->wisdom = 0;
    stat->health = 0;
}

static void give_stat_spellcaster(stats_t *stat)
{
    stat->strenght = 0;
    stat->dext = 0;
    stat->luck = -1;
    stat->wisdom = 0;
    stat->health = 0;
}

static void give_stat_ranger(stats_t *stat)
{
    stat->strenght = 0;
    stat->dext = 0;
    stat->luck = -1;
    stat->wisdom = 0;
    stat->health = 0;
}

void give_stat(stats_t *stat)
{
    if (stat->nmbr_class == 1)
        give_stat_warrior(stat);
    if (stat->nmbr_class == 2)
        give_stat_ranger(stat);
    if (stat->nmbr_class == 3)
        give_stat_spellcaster(stat);
}
