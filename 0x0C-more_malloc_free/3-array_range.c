#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *array_range- function that creates an array of integers.
  *@min: valeur minimum.
  *@max: valeur maximum.
  *
  *Return: array.
*/

int *array_range(int min, int max)
{
	int i;
	int size;
	int *arr;


	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;

	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
