#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
  *malloc_checked- function that allocates memory.
  *@b: character.
  *
  *Return: ptr;
*/


void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		const char *msg = "memory allocation failed\n";

		while (*msg)
		{
			putchar(*msg++);
		}

		exit(98);
	}
	return (ptr);
}
