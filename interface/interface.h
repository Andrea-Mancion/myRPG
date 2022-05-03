/*
** EPITECH PROJECT, 2022
** interface.h
** File description:
** o
*/

#ifndef INTERFACE_H_
#define INTERFACE_H_

typedef struct stats_s {
    int strenght;
    int health;
    int wisdom;
    int dext;
    int luck;
}stats_t;

typedef struct invetory_s {
    struct object_t *obj;
}invetory_t;

typedef struct button_s {
    int stat;
}button_t;

typedef struct game_s {
    invetory_t **invetory;
    stats_t *stat;
    int nmbr_class;
    int nbr_of_point;
}game_t;


#endif
