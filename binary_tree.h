##
## Created By AIS3N
##

#ifndef __BINARY_TREE_H_
#define __BINARY_TREE_H_

typedef struct s_tree
{
  int		valeur;
  struct s_tree	*prev;
  struct s_tree	*right;
  struct s_tree	*left;
}		t_tree;

void    my_putchar(char c);
void	my_putstr(char *str);
void    my_put_nbr(int n);
int     binary_tree(t_tree **tree, int i);
void    print_to(t_tree *tree, int i);
  
#endif
