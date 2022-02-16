#include <stdbool.h>

#ifndef __SHAKER_H__
#define __SHAKER_H__

#include <stddef.h>
#include "puts.h"
#include <stdio.h>

char *std_shaker(char     *cnt,
		 size_t   len,
		 char     *key,
		 bool     cipher);

#endif /* __SHAKER_H__ */
