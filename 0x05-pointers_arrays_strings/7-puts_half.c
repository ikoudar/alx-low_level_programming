#include <string.h>
#include "main.h"

/**
  *puts_half - print the half of string.
  *
  *@str: the string to print.
*/

void puts_half(char *str)
{
	int length = strlen(str);
	int n_ind = (length - 1) / 2;
	int i;

	for (i = n_ind; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
