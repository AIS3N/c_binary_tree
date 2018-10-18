/*
** my_put_nbr.c for my_put.nbr.c in /home/demi/smajov_d/Jour05/smajov_d/my_put_nbr
** 
** Made by SMAJOVIC Demirel
** Login   <smajov_d@etna-alternance.net>
** 
** Started on  Mon Sep 26 14:58:35 2016 SMAJOVIC Demirel
** Last update Sat Oct  1 13:03:46 2016 SMAJOVIC Demirel
*/

void	my_putchar(char c);

void	my_putstr(char *str);

void	my_put_nbr(int  n)
{
  int	d;

  d = 1;
  if (n < 0)
    {
      n = n * (-1);
      my_putchar('-');
    }
  if (n < -2147483647)
    my_putstr("2147483648");
  else
    {
      while ((n / d) > 9)
	d = d * 10;
      while (d >= 1)
	{
	  my_putchar((n / d) % 10 + 48);
	  d = d / 10;
	}
    }
}
