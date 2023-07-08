#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

unsigned int _strspn(char *s, char *accept)
{
	return strspn(s, accept);
}
