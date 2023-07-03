#include "main.h"
#include <stdio.h>

/**
  *_strchr-  function that locates a character in a string.
  *@s: string.
  *@c: character.
  *Return: first occurrence of the character c.
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
