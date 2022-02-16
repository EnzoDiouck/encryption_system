#include "encry.h"

char *std_encryptor(char *name)
{
  int i;
  char *str;

  str = malloc(sizeof(char) * 20);
  i = 1;
  if (std_strcmp((char *)name, "xor") == 0)
    return (char *)name;
  else if (std_strcmp((char *)name, "shake") == 0)
    return (char *)name;
  else if (std_strcmp((char *)name, "caesar") == 0)
    return (char *)name;
  else if (std_strcmp((char *)name, "hash") == 0)
    return (char *)name;
  else if (std_strcmp((char *)name, "bytbit") == 0)
    return (char *)name;
  else
    {
      while (i)
	{
	  write(1, "error for encryptor, please enter it again: ",44);
	  read(0,str,20);
	  i--;
	  return (std_encryptor(str));
	}
    }
  return str;
}
