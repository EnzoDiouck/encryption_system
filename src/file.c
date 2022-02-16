#include "file.h"

char *std_read_file(char *name)
{
  int fd;
  int count;
  int comp;
  char *str;
  char c;

  comp =  0;
  fd = open(name, O_RDONLY);
  if (fd == -1)
    {
      write (1, "error when openning source, try again: ", 39);
      comp = read(0, name, 256);
      name[comp - 1] = '\0';
      return std_read_file(name);
    }
  while (count != 0)
    {
      count = read(fd, &c, 1);
      comp++;
    }
  close(fd);
  fd = open(name, O_RDONLY);
  str = malloc(sizeof(char) * comp + 1);
  read (fd, str, comp);
  str[comp - 1] = '\0';
  close(fd);
  return str;
}

void std_write_file(char *name,
		    char *str,
		    bool preview)
{
  int fd;
  bool save;
  char *rep;

  save = false;
  if (preview == true)
    {
      rep = malloc(sizeof(char) * 4);
      std_puts(str);
      std_puts("do you want to save the result in the file [yes/no]: ");
      read(0, rep, 3);
      rep[3] = '\0';
      if (std_strcmp(rep, "yes") == 0)
	save = true;
    }
  else
    save = true;
  if (save == true)
    {
      fd = open(name, O_WRONLY | O_CREAT, 0644);
      if (fd == -1)
	{
	  write (1, "error when opening destination\n", 32);
	  return;
	}
      write(fd, str, std_strlen(str));//le write ne fonctionne pas
      close(fd);
    }
  free(rep);
  return;
}
