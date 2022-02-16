#include "memcpy.h"

void *std_memcpy(void *dest,
		 const void *src,
		 size_t n)
{
  char *temp_src;
  char *temp_dest;
  int comp;

  if (n == 0)
    n = (int)std_strlen((char *)src);
  temp_dest = (char *)dest;
  temp_src = (char *)src;
  comp = 0;
  while (comp < (int)n)
    {
      temp_dest[comp] = temp_src[comp];
      comp++;
    }
  return dest;
}
