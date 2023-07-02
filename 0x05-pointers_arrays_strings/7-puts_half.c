#include <string.h>
#include "main.h"

/**
  *puts_half - print the half of string.
  *
  *@str: the string to print.
*/

void puts_half(char *str)
{
	int length = 0;
	int a, i;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		a = length / 2;
	}
	else
	{
		a = (length + 1) / 2;
	}

	for (i = a; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
