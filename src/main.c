#include "encryptor.h"

int main(int argc, const char *argv[])
{
  int comp;
  int count;
  int i;
  int j;
  int k;
  int l;
  bool cipher;
  bool preview;
  char *encryptor;
  char *key;
  char *word;
  char *name;
  char *dest;

  if (argc == 1)
    {
      std_help();
      return 0;
    }
  l = 0;
  i = 0;
  j = 0;
  k = 0;
  comp = 0;
  name = malloc(sizeof(char) * 256);
  key = malloc(sizeof(char) * 256);
  dest = malloc(sizeof(char *));
  encryptor = malloc(sizeof(char) * 256);
  word = malloc(sizeof(char *));
  preview = false;
  dest = NULL;
  while (comp != argc)
    {
      count = 0;
      if (std_strcmp((char *)argv[comp], "-d") == 0)
	{
	  if (argv[comp + 1] != NULL)
	    dest = (char *)argv[comp + 1];
	  else
	    {
	      write(1,"please enter the destination: ", 30);
	      count = read(0, dest, 256);
	      dest[count - 1] = '\0';
	    }
	}
      else if (std_strcmp((char *)argv[comp], "-s") == 0)
	{
	  if (argv[comp + 1] != NULL)
	    word = std_read_file((char *)argv[comp + 1]);
	  else
	    {
	      write(1,"please enter the source: ", 25);
	      count = read(0, name, 256);
	      name[count - 1] = '\0';
	      word = std_memcpy(word, std_read_file(name), 0);
	    }
	  l += 1;
	}
      else if (std_strcmp((char *)argv[comp], "-e") == 0)
	{
	  if (argv[comp + 1] != NULL)
	    encryptor = (char *)argv[comp + 1];
	  else
	    {
	      write(1,"please enter an encryptor: ", 27);
	      read(0, encryptor, 256);
	    }
	  j++;
	}	
      else if (std_strcmp((char *)argv[comp], "-p") == 0)
	preview = true;
      else if (std_strcmp((char *)argv[comp], "-c") == 0)
	{
	  if (argv[comp + 1] != NULL)
	    cipher = std_cipher((char *)argv[comp + 1]);
	  else
	    cipher = std_cipher(" ");
	  i++;
	}
      else if (std_strcmp((char *)argv[comp], "-k") == 0)
	{
	  if (argv[comp + 1] != NULL)
	    key = (char *)argv[comp + 1];
	  else
	    {
	      write(1,"please enter a key: ", 20);
	      count = read(0, key, 256);
	      key[count - 1] = '\0';
	    }
	  k++;
	}
      comp++;
    }
  count = 0;
  if (k == 0)
    {
      write(1,"please enter a key: ", 20);
      count = read(0, key, 256);
      key[count - 1] = '\0';
    }
  if (j == 0)
    {
      write(1,"please enter an encryptor: ", 27);
      read(0, encryptor, 256);
    }
  if (i == 0)
    cipher = std_cipher(" ");
  if (l == 0)
    word = std_memcpy(word, std_word(), 0);	
  std_dowork(encryptor, word, key, cipher, preview, dest);
  free(name);
  return 0;
}
