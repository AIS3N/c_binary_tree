##
## Created By AIS3N
##

#include <stdlib.h>
#include "binary_tree.h"

void	print_to(t_tree *tree, int i)
{
  int	bool;

  bool = 0;
  while (tree->prev != NULL)
    {
      tree = tree->prev;
    }
  while (bool != 1)
    {
      if (i < tree->valeur && tree->left != NULL)
	{
	  my_put_nbr(tree->valeur);
	  my_putchar('-');
	  my_putchar('>');
	  tree = tree->left;
	}
      else if (i > tree->valeur && tree->right != NULL)
	{
	  my_put_nbr(tree->valeur);
	  my_putchar('-');
	  my_putchar('>');
	  tree = tree->right;
	}
      else if (i == tree->valeur)
	{
	  my_put_nbr(tree->valeur);
	  bool = 1;
	}
      else
	{
	  my_putstr("\nVALUE DOES NOT EXIST");
	  bool = 1;
	}
    }
  my_putchar('\n');
}
