#include "caesar.h"

char *std_caesar(char    *data,
		 size_t  len,
		 char    *key)
{
  int comp;
  int comp2;

  comp = 0;
  comp2 = 0;
  while (len > 0)
    {
      if (key[comp2] == '\0')
	comp2 = 0;
      data[comp] += key[comp2];
      comp2++;
      comp++;
      len--;
    }
  //std_puts(data);
  return data;
}


 
