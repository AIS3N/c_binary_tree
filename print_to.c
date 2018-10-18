/*
** binary_tree.c for binary_tree.c in /home/demirel/smajov_d
** 
** Made by SMAJOVIC Demirel
** Login   <smajov_d@etna-alternance.net>
** 
** Started on  Tue May  23 10:20:48 2017 SMAJOVIC Demirel
** Last update Wed May  23 08:16:16 2017 SMAJOVIC Demirel
*/

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
