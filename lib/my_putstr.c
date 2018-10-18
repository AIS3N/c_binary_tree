/*
** my_putstr.c for my_putstr.c in /home/demi/smajov_d/Jour03/smajov_d/my_putstr
** 
** Made by SMAJOVIC Demirel
** Login   <smajov_d@etna-alternance.net>
** 
** Started on  Sun Sep 25 03:35:53 2016 SMAJOVIC Demirel
** Last update Sun Sep 25 03:36:13 2016 SMAJOVIC Demirel
*/

void	my_putchar(char c);

void	my_putstr(char *str)
{
  while (*str)
    {
      my_putchar(*str);
      str = str + 1;
    }
}
