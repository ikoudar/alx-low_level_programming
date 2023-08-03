#include "main.h"
#include <stdio.h>

/**
  *binary_to_uint- function that converts a binary number.
  *
  *@b: string to test
  *Return: 1 if string is valid
*/

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	return (1);
}
