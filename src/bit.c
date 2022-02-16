#include "bit.h"

unsigned int std_getbit(int data,
			int bit_nbr)
{
  return (data >> bit_nbr) & 1;
}

void std_setbit(unsigned char *data,
		int bit_nbr,
		int bit)
{
  if (bit == 0 || bit == 1)
    (*data) = (bit << bit_nbr) | (*data);
  else
    return;
}

void std_resetbit(int *data,
		  int bit_nbr)
{
  (*data) = (*data) & (~(1 << bit_nbr));
}


void std_revbit(int *data,
		int bit_nbr)
{
  (*data) = (*data) ^ (1 << bit_nbr);
}
