#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *_calloc- function that allocates memory for an array.
  *@nmemb: the number of elements in the array.
  *@size: The size (in bytes) of each element.
  *
  *Return: Pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *P;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;

	P = malloc(total_size);

	if (P == NULL)
	{
		return (NULL);
	}

	memset(P, 0, total_size);

	return (P);
}
