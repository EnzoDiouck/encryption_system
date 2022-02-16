#include "word.h"

char *std_word()
{
  int comp;
  char *word;

  comp = 0;
  word = malloc(sizeof(char) * 256);
  write(1, "please enter the sentence that will be encrypted: ", 50);
  comp = read(0, word, 256);
  word[comp - 1] = '\0';
  if (std_strcmp(word, "\n") == 0)
    return std_word();
  else
    return word;
}
