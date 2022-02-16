#include "printbase.h"

static int std_strlen(char *str)
{
  int comp;

  comp = 0;
  while (str[comp] != '\0')
    comp++;
  return comp;
}

static char *std_vputs(char *str)
{
  char *new_str;
  int comp;
  int comp2;

  comp = 0;
  comp2 = std_strlen(str);
  comp2--;
  new_str = malloc(50);
  while (str[comp] != '\0')
    {
      new_str[comp] = str[comp2];
      comp++;
      comp2--;
    }
  new_str[comp] = '\0';
  return new_str;
}

char *std_printbase(int number, int base)
{
 char *baseref;
 char *new_number;
 char *number2;
 int comp;

 comp = 0;
 baseref = malloc(16);
 new_number = malloc(50);
 number2 = malloc(50);
 baseref = "0123456789ABCDEF";
 while (number > 0)
   {
     new_number[comp] = baseref[number % base];
     number /= base;
     comp++;
   }
 new_number[comp] = '\0';
 number2 = std_vputs(new_number);
 free(new_number);
 return number2;
}
//c'est dan le mauvais ordre et j'arriva pas a le remetrre
