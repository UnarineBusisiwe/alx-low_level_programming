#include "main.h"
#include <stdio.>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strbrk(char *s, char *accept)
{
	return strbrk(s, accept);
}
