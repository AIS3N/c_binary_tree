##
## Created By AIS3N
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
