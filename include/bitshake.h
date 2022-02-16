#ifndef __BITSHAKE_H__
#define __BITSHAKE_H__

#include <stddef.h>
#include <stdbool.h>

void std_bitshake(char   *cnt,
                  size_t len,
                  char   *key,
                  bool   cipher);

#endif /* __BITSHAKE_H__ */
