/*
** my_putchar.c for my_putchar.c in /home/demi/smajov_d
** 
** Made by SMAJOVIC Demirel
** Login   <smajov_d@etna-alternance.net>
** 
** Started on  Fri Sep 23 18:04:47 2016 SMAJOVIC Demirel
** Last update Sun Oct  2 18:23:34 2016 SMAJOVIC Demirel
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write (1,&c,1);
}
