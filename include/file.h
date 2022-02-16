#ifndef __FILE_H__
#define __FILE_H__

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdbool.h>
#include "memcpy.h"
#include "strlen.h"
#include "strcmp.h"
#include "puts.h"

char *std_read_file(char *name);

void std_write_file(char *name,
		    char *str,
		    bool preview);

#endif /* __FILE_H__  */
