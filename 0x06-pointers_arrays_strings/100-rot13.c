#include "main.h"
#include <stdio.h>

/**
  *rot13- rot13 encoder
  *@str: string
  *
  *
  *Return: 0
*/

char *rot13(char *str)
{
	char one[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char two[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		char replacement = str[i];

		for (j = 0; j < 52; j++)
		{
			if (str[i] == one[j])
			{
				replacement = two[j];
				break;
			}
		}
		str[i] = replacement;
	}
	return (str);
}
