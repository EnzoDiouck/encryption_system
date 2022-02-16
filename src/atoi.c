/*
** Enzo PFEIFFER diouck
** enzo.pfeiffer - <enzo.pfeiffer@ecole-89.com>
**
** atoi.c - 2021
*/

#include "atoi.h"

int	std_atoi(const char *str)
{
  int resultat;
  int comp;

  comp = 0;
  resultat = 0;
  while (str[comp] != '\0' && str[comp] >= 48 && str[comp] <= 57)
    {
      resultat = resultat + str[comp] - 48;
      resultat = resultat * 10;
      comp++;
    }
  resultat = resultat / 10;
  return (resultat);
}
