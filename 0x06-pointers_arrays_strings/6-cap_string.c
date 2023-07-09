#include <string.h>
#include <stdio.h>
#include "main.h"

/**
  *cap_string- function that capitalizes all words of a string.
  *
  *
  *Return: str
*/

char *cap_string(char *)
{
	int len = strlen(str);
	int i;

	if (len > 0 && islower(str[0]))
	{
		str[0] = toupper(str[0]);
	}
	for (i = 1; i < len; i++)
	{
		if (isspace(str[i - 1]) || ispunct(str[i - 1])
				{
				if (islower(str[i])
						{
						str[i] = toupper(str[i]);
						}
				}
	}

	return (str);
}
