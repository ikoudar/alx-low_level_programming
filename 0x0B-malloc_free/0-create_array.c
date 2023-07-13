#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *create_array- function that creates an array,
  *and initializes it with a specific char.
  *@size: number of byte
  *
  *@c: character c.
  *Return: array.
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
