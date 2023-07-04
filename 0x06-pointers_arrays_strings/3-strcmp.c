#include <stdio.h>
#include "main.h"

/**
  *_strcmp- function that compare two strings
  *
  *@s1: character one
  *@s2: second character
  *Return: 0
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		return (0);
	}

	return (s1[i] - s2[i]);
}
