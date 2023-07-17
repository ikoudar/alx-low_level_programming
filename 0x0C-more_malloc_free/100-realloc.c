#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *_realloc- function that reallocates a memory block.
  *
  *
  *
  *Return:
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	unsigned int min_size, i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	min_size = (new_size > old_size);

	for (i = 0; i < min_size; i++)
	{
	}

	free(ptr);

	return (new_ptr);
}
