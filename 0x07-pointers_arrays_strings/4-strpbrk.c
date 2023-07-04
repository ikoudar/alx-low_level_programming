#include <stddef.h>
#include "main.h"

/**
  *_strpbrk- function that searches a string for any of a set of bytes.
  *@s:the first occurrence in the string.
  *@accept:string.
  *Return: NULL
*/

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
