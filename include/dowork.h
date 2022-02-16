#ifndef __DOWORK_H__
#define __DOWORK_H__

#include "memcpy.h"
#include "strlen.h"
#include "strcmp.h"
#include "xor.h"
#include "caesar.h"
#include "hash.h"
#include "shaker.h"
#include "file.h"
#include <unistd.h>

int std_dowork(char *name, char *word, char *key, bool cipher, bool preview, char *dest);


#endif /* __DOWORK_H__ */
