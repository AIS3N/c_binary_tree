##
## Makefile for Makefile in /home/demirel/Documents/smajov_d
##
## Made by SMAJOVIC Demirel
## Login   <smajov_d@etna-alternance.net>
##
## Started on  Tue May  2 19:39:14 2017 SMAJOVIC Demirel
## Last update Wed May  3 10:50:48 2017 SMAJOVIC Demirel
##

FILES = lib/my_putchar.c \
        lib/my_putstr.c \
        lib/my_put_nbr.c \
	main.c \
	binary_tree.c \
        print_to.c \

NAME = binary_tree.a

all:	binary_tree

binary_tree:
	gcc $(FILES) -o binary_tree

clean:
	rm -f *.o

fclean:		clean
	rm -rf binary_tree

re:	fclean all
