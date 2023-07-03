#include <stddef.h>
#include "main.h"

/**
  *_memset- function that fills memory with a constant byte.
  *@s: memory aera.
  *@n: number of byte.
  *@b: character.
  *Return: s.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
