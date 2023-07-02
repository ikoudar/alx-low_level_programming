#include <limits.h>
#include "main.h"
#include <stdio.h>

/**
  *_atoi- function that convert a string to an integer.
  *@s: number of string.
  *
  *Return: always 0.
*/

int _atoi(char *s)
{
	int result = 0;

	while (*s == ' ')
		s++;

	if (*s == '-')
	{
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		if (result > (INT_MAX / 10) || (result == (INT_MAX / 10) &&
					(*s - '0') > (INT_MAX % 10)))
		{
			if (*s == 1)
				return INT_MAX;
			else
				return INT_MIN;
		}
		result = result * 10 + (*s - '0');
		s++;
	}

	return (0);

}
