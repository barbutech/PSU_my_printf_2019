##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make a file
##

SRC 	=	lib/my/bases.c	\
			lib/my/flag_l.c \
			lib/my/flags_base.c \
			lib/my/flags.c \
			lib/my/long_put_nbrs.c \
			lib/my/my_getnbr.c \
			lib/my/my_printable_putstr.c \
			lib/my/my_printf.c \
			lib/my/my_put_nbr_hex.c \
			lib/my/my_put_nbr.c \
			lib/my/my_putchar.c \
			lib/my/my_putstr.c \
			lib/my/my_strcmp.c \
			lib/my/unsigned.c

OBJ 	= 	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ)

test_run:
		gcc -o unit_test bonus/test_with_multiple_flags.c $(SRC) -lcriterion
		./unit_test

fclean:		clean
		rm -rf $(NAME)

re:		fclean all
