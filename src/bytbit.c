#include "bytbit.h"
#include "bit.h"
#include "strlen.h"
#include "memcpy.h"

void std_bytbit(char    *cnt,
		size_t len)
{
  unsigned char *temp_cnt;
  int comp;
  int comp2;
  int count;
  int reverse_comp2;

  temp_cnt = malloc(std_strlen(cnt));
  if (temp_cnt == NULL)
    return;
  comp = 0;
  comp2 = 0;
  count = 0;
  reverse_comp2 = 0;
  while (len > 0)
    {
      std_setbit(&temp_cnt[comp], comp2, BITGET(cnt[count],reverse_comp2));
      if (comp2 == 8)
	{
	  reverse_comp2++;
	  //reverse_comp2 = 0;
	  count = 0;
	  comp2 = 0;
	  comp++;
	  len--;
	}
      count++;
      comp2++;
      //reverse_comp2++;
    }
  cnt = std_memcpy(cnt,(char *)temp_cnt,std_strlen((char*)temp_cnt));
  free(temp_cnt);
}

