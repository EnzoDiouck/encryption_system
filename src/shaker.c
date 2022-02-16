#include "shaker.h"
#include "strnlen.h"
#include "strlen.h"

static void true_shaker(char     *cnt,
			size_t   len,
			char     *key)
{
  int comp;
  int comp2;
  int size_cnt;
  int letter;
  char temp_cnt;

  comp = 0;
  comp2 = 0;
  size_cnt = std_strnlen(cnt,len);
  while (len > 0)
    {
      if (key[comp2] == '\0')
	comp2 = 0;
      letter = key[comp2] % size_cnt + comp;
      if (letter >= size_cnt)
	letter = letter - size_cnt;
      temp_cnt = cnt[comp];
      cnt[comp] = cnt[letter];
      cnt[letter] = temp_cnt;
      comp2++;
      comp++;
      len--;
    }
}

static void false_shaker(char     *cnt,
			size_t   len,
			char     *key,
			int      size_cnt)
{
  int comp2;
  int letter;
  int count;
  char temp_cnt;

  count = size_cnt;
  comp2 = size_cnt % std_strlen(key) - 1;
  if (count > (int)len)
    count--;
  else
    {
      while (len > 0)
	{
	  if (comp2 == -1)
	    comp2 = std_strlen(key) - 1;
	  letter = (len - 1) + (key[comp2] % size_cnt);
	  if (letter >= size_cnt)
	    letter = letter - size_cnt;
	  temp_cnt = cnt[len - 1];
	  cnt[len - 1] = cnt[letter];
	  cnt[letter] = temp_cnt;
	  comp2--;
	  len--;
	}
    }
}


char *std_shaker(char     *cnt,
		 size_t   len,
		 char     *key,
		 bool     cipher)
{
  int size_cnt;

  //  printf("%s, %s lol", cnt, key);
  size_cnt = std_strnlen(cnt,len);
  if ((int)len > size_cnt)
    len = size_cnt;
  if (cipher == true)
    true_shaker(cnt, len, key);
  else
    false_shaker(cnt, len, key, size_cnt);
  //std_puts(cnt);
  return cnt;
  //printf("%s", cnt);
}
