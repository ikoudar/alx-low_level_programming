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
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest);
}
