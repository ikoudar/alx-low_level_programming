#include "main.h"
#include <stdio.h>

/**
  *get_endianness- function that checks the endianness.
  *
  *
  *
  *Return: 0
*/

int get_endianness(void)
{
	unsigned int x = 1;
	char *endian = (char *)&x;

	if (*endian)
		return (1);
	return (0);
}
