##
## Created By AIS3N
##

#include <stdlib.h>
#include "binary_tree.h"

#define	TAB_LEN	6

t_tree	*check(t_tree **tree, int i);

int	main(void)
{
  signed int	tab[] = {3, 1, 2, 5, 4, -1};
  unsigned int	i;
  int		verif;
  t_tree	*tree;

  i = 0;
  verif = 0;
  tree = NULL;
  while (i < TAB_LEN)
    {
      verif = binary_tree(&tree, tab[i]);
      if (verif == 1)
	{
	  my_putstr("ERROR DETECTED\n");
	  return (0);
	}
	i++;
    }
  print_to(tree, 4);
  free(tree);
  return (0);
}
