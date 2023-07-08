#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int _isupper(int c)
{
	return isupper(c >= 'A' && c <= 'Z');
}
