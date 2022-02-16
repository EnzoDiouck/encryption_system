#include "strnlen.h"

size_t std_strnlen(const char *s,
		  size_t maxlen)
{
  int comp;

  comp = 0;
  while (comp < (int)maxlen && s[comp] != '\0')
    comp++;
  return comp;
}
