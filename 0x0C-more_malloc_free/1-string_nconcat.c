#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *string_nconcat- function that concatenates two strings.
  *@s1: first character
  *@s2: second character
  *@n: number of bytes
  *
  *Return: result.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	int i = 0, j = 0, s_1 = strlen(s1), s_2;

	n < (unsigned int) strlen(s2) ? (s_2 = n) : (s_2 = strlen(s2));
	new_string = (char *) malloc(s_1 + s_2 + 1);
	if (new_string != NULL)
	{
		for (; i < s_1; i++)
		{
			new_string[i] = s1[i];
		}
		for (; j < s_2; j++)
		{
			new_string[i + j] = s2[j];
		}
		new_string[i + j] = '\0';
	}
	else
	{
		return (NULL);
	}

	return (new_string);
}
