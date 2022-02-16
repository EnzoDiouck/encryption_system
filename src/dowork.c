#include "dowork.h"

int std_dowork(char *name, char *word, char *key, bool cipher, bool preview, char *dest)
{
  char *result;

  result = malloc(sizeof(char *));
  if (std_strcmp(name, "xor") == 0)
    result = std_xor(word, std_strlen(word), key);
  else if (std_strcmp(name, "caesar") == 0)
    result = std_caesar(word, std_strlen(word), key);
  else if (std_strcmp(name, "hash") == 0)
    result = std_hash(word, std_strlen(word));
  else if (std_strcmp(name, "shaker") == 0)
    result = std_shaker(word, std_strlen(word), key, cipher);
  else
    {
      write(1, "maybe you put a wrong encrypting system, please try again: ", 59);
      read(0, name, 256);
      return std_dowork(name, word, key, cipher, preview, dest);
    }
  //result[std_strlen(result)] = '\0';
  if (dest != NULL)
    std_write_file(dest, result, preview); 
  else
    std_puts(result);
  free(result);
  return 0;
}
