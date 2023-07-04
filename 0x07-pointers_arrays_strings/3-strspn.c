#include "main.h"
#include <stdio.h>

/**
  *_strspn- function that gets the length of a prefix substring.
  *@accept: take only of bytes from it.
  *@s: initial segment.
  *Return: number of bytes in the initial segment.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int a = 1;
	int i = 0;

	while (*s != '0' && a)
	{
		a = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				length++;
				a = 1;
				break;
			}
		}
		if (a)
		{
		s++;
		}
	}
	return (length);
}
