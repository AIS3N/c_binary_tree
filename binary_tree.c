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

#define	TAB_LEN	6

t_tree  *check(t_tree **tree, int i)
{
  t_tree        *tmp;
  t_tree        *tmp2;
  int           bool;

  bool = 0;
  tmp2 = malloc(sizeof(t_tree));
  tmp = *tree;
  if (tmp2 != NULL)
    {
      while (tmp->prev != NULL)
	tmp = tmp->prev;
      while (bool != 1)
	{
	  if (i < tmp->valeur)
	    {
	      if (tmp->left == NULL)
		{
		  tmp2->valeur = i;
		  tmp2->prev = tmp;
		  tmp2->right = NULL;
		  tmp2->left = NULL;
		  tmp->left = tmp2;
		  bool = 1;
		}
	      tmp = tmp->left;
	    }
	  else if (i > tmp->valeur)
	    {
	      if (tmp->right == NULL)
		{
		  tmp2->valeur = i;
		  tmp2->prev = tmp;
		  tmp2->right =NULL;
		  tmp2->left = NULL;
		  tmp->right = tmp2;
		  bool = 1;
		}
	      tmp = tmp->right;
	    }
	  else if (i == tmp->valeur)
	    {
	      my_putstr("ERROR : SAME VALUE\n");
	      bool = 1;
	    }
	}
    }
  return (tmp);
}
 
int	binary_tree(t_tree **tree, int i)
{
  t_tree	*tmp;
  
  tmp = malloc(sizeof(t_tree));
  if (tmp != NULL)
    {
      if (*tree == NULL)
	{
	  tmp->valeur = i;
	  tmp->prev = NULL;
	  tmp->right = NULL;
	  tmp ->left = NULL;
	}
      else
	  tmp = check(tree, i);
    }
  else
    return (1);
  *tree = tmp;
  return (0);
}
