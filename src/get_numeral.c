/*
** *****************************************************************************
** enzo.pfeiffer
** enzo.pfeiffer <enzo.pfeiffer@student-station>
**
** get_numeral.c - 2021
**
** *****************************************************************************
*/

#include "get_numeral.h"

int std_get_numeral(int nbr, int mul)
{
  int x;
  int y;

  x = 1;
  y = 0;
  mul++;
  if (mul < 0)
    return -1;
  if (nbr < 0)
    nbr = -nbr;
  while (y < mul)
    {
      x = x * 10;
      y++;
    }
  x = x / 10;
  y = (nbr % x) / (x/10);
  return y;
}
