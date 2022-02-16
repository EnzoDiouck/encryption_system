#include "cipher.h"

bool std_cipher(char *cipher)
{
  char * str;

  str = malloc(sizeof(char) * 20);
  if (std_strcmp(cipher, "true") == 0)
    return true;
  else if (std_strcmp(cipher, "false") == 0)
    return false;
  else
    {
      write(1, "error for cipher, please enter it again: ",41);
      if (read(0,str,20) == -1)
	str = std_memcpy(str, " ", 1);
      return (std_cipher(str));
    }
  return true;
}
