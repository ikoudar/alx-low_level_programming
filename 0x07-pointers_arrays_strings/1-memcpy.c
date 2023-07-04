#include <stdio.h>
#include "main.h"

/**
  *_memcpy- function that copies memory area.
  *@dest: destination.
  *@src: source.
  *@n: number byte for memory aera.
  *Return: dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char* dest_p = dest;

	while (n > 0)
	{
		*dest_p++ = *src++;

		n--;
	}

	return (dest);
}
