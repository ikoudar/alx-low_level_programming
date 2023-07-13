#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *_strdup- function that returns a pointer to a,
  *newly allocated space in memory.
  *@str: memory of new string.
  *
  *
  *Return: duplicate.
*/

char *_strdup(char *str)
{
	size_t length;
	char *duplicate;


	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str) + 1;

	duplicate = malloc(length * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
