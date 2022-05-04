/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** for functions
*/

#include "my_rpg.h"

#ifndef MY_H_
    #define MY_H_

    void create_ninja(struct_object *object);
    sfRenderWindow *create_window(struct_object *object);
    void create_background(struct_object *object);
    void create_back2(struct_object *object);
    void create_back3(struct_object *object);
    void create_back4(struct_object *object);
    void clock(struct_object *object, sfRenderWindow *window);
    void create_clock(struct_object *object);
    void create_music(struct_object *object);
    void create_ennemy(struct_object *object);
    void create_ennemy2(struct_object *object);
    void render_window(struct_object *object, sfRenderWindow *window);
    void move_ninja(struct_object *object, sfRenderWindow *window);
    void mouvement_x(struct_object *object, sfRenderWindow *window);
    void mouvement_x_back(struct_object *object, sfRenderWindow *window);
    void mouvement_y_up(struct_object *object, sfRenderWindow *window);
    void mouvement_y_down(struct_object *object, sfRenderWindow *window);
    void move_background(struct_object *object, sfRenderWindow *window);
    void move_back2(struct_object *object, sfRenderWindow *window);
    void move_back3(struct_object *object, sfRenderWindow *window);
    void move_back4(struct_object *object, sfRenderWindow *window);
    void destroy(struct_object *object, sfRenderWindow *window);
    void create_object(struct_object *object);
    void move_object(struct_object *object, sfRenderWindow *window);
    void create_inventory(struct_object *object);
    void put_inventory(struct_inventory **inventory,
    struct_baguette *baguette);
    void print_inventory(struct_object *object, sfRenderWindow *window);
    void create_text_inventory(struct_object *object);
    int second_window(struct_object *object, sfRenderWindow *window);
    void create_stat(struct_object *object);
    void give_stat(stats_t *stat);
    void print_stat(struct_object *object, sfRenderWindow *window);
    void create_number_text_stat(struct_object *object);
    char *itoa(int i);
    void choose_class(struct_object *object, sfRenderWindow *window, sfEvent
    *event);
    void create_class_text(struct_object *obj);
    char *my_strcat(char *str1, char const *str2);
    void print_battle(struct_object *obj, struct_charachter foe);
    void create_text_battle(struct_object *object, struct_charachter foe);
    struct_charachter start_battle(struct_object *object, struct_charachter foe);
    void move_battle(struct_object *object, struct_charachter foe);

#endif /* !MY_H_ */
