#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int _islower(int c)
{
	return islower(c >= 'a' && c <= 'Z');
}
