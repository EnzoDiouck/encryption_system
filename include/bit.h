#ifndef __BIT_H__
#define __BIT_H__

#include <stddef.h>
#include <stdlib.h>

#define BITSET(data, bit_nbr, bit) std_setbit(&data, bit_nbr,bit)
#define BITRESET(data, bit_nbr) std_resetbit(&data, bit_nbr)
#define BITGET(data, bit_nbr) std_getbit(data, bit_nbr)
#define BITREV(data, bit_nbr) std_revbit(&data, bit_nbr)

void std_setbit(unsigned char *data,
                int bit_nbt,
		int bit);

unsigned int std_getbit(int data,
			int bit_nbt);

void std_resetbit(int *data,
		  int bit_nbt);

void std_revbit(int *data,
		int bit_nbr);

#endif /* __BIT_H__ */
