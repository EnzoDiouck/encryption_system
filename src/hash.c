#include "hash.h"
#include "strnlen.h"

char *std_hash (char   *data,
		size_t len)
{
  int comp;
  int comp2;
  int value;

  value = 0;
  comp2 = 0;
  comp = std_strnlen(data, len);
  if (comp == 0)
    return "non";
  while (comp2 < comp)
    {
      value += data[comp2] * data[comp2] / 33 + 5;
      comp2++;
    }
  //std_puts(std_printbase(value, 10));
  return std_printbase(value, 10);
}
