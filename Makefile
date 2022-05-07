##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile my_runner
##

ECHO = /bin/echo -e
DEFAULT = "\033[00m"
BOLD = "\e[1m"
RED = "\e[31m"
GREEN = "\e[32m"
LIGHT_BLUE = "\e[94m"
WHITE = "\e[1;37m"

SRC	=	lib/my_putchar.c	\
		lib/my_putstr.c	\
		create_object/create_object.c	\
		renderwindow.c	\
		create_object/create_object2.c	\
		create_object/create_mob.c	\
		create_object/create_wife.c	\
		move/move_object.c	\
		move/move_object2.c	\
		move/move_spell.c	\
		move/move_ranger.c	\
		move/move_wife.c	\
		inventory/create_inventory.c	\
		inventory/print_inventory.c	\
		inventory/put_inventory.c	\
		menu/background_menu.c	\
		menu/button_menu.c	\
		menu/click_button.c	\
		menu/main_menu.c	\
		my_runner.c	\
		my_rpg.c	\
		stat/create_stat.c	\
		stat/give_stats.c	\
		stat/upgrade_stat.c	\
		pause/create_button_text.c	\
		pause/click_but_pause.c	\
		stat/create_text_stat.c	\
		lib/my_revstr.c	\
		lib/my_strlen.c	\
		lib/itoa.c	\
		lib/my_strcat.c	\
		class/chose_class.c	\
		class/class_text.c	\
		battle/create_battle_text.c	\
		battle/create_battle.c	\
		battle/print_battle.c	\
		battle/move_battle.c	\
		battle/move_battle2.c	\
		battle/button_battle.c	\
		battle/start_battle.c	\
		battle/create_battle2.c	\
		game_over/create_gameover.c	\
		game_over/interaction_but.c	\
		battle/clock_battle.c	\
		battle/contact_ennemy.c	\
		dialogue/create_text_dialogue.c	\
		dialogue/print_dialogue.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio -lm
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

debug:	CFLAGS += -g
debug:	re

re:	fclean all

tests_run:
		gcc -o unit_test $(SRC) -L . -lmy -lcriterion --coverage
		./unit_test

%.o:	%.c
	@$(CC) -c -o $@ $^ $(CFLAGS) && $(ECHO) -n $(BOLD) $(GREEN)" [OK] " \
	$(WHITE) || $(ECHO) -n $(BOLD) $(RED)" [KO] "$(WHITE) && $(ECHO) \
	$(BOLD) $< | rev | cut -d/ -f 1 | rev && $(ECHO) -n $(DEFAULT)
