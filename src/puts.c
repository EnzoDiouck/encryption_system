#include "puts.h"

void	std_puts(const char *str)
{
  int	cara;

  cara = 0;
  while (str[cara] != '\0')
    {
      write (1, &(str[cara]), 1);
      cara++;
    }
  write(1, "\n", 2);
}

