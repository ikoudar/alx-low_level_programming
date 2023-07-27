#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * len - returns length of str
 * @str: string counted
 * Return: len
 */
int len(char *str)
{
	int length = 0;

	if (str != NULL)
	{
		while (str[length])
			length++;
	}
	return (length);
}

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ab: count of args
 * @yz: array of args
 *
 * Return: ptr
 */
char *argstostr(int ab, char **yz)
{
	char *new_string = NULL;
	int x = 0, i = ab, j, sum = 0, temp = 0;

	if (ab == 0 || yz == NULL)
		return (NULL);

	while (ab--)
		sum += (len(yz[ab]) + 1);

	new_string = (char *)malloc(sum + 1);

	if (new_string != NULL)
	{
		while (x < i)
		{
			for (j = 0; yz[x][j] != '\0'; j++)
				new_string[j + temp] = yz[x][j];
			new_string[temp + j] = '\n';
			temp += (j + 1);
			x++;
		}
		new_string[temp] = '\0';
	}
	else
	{
		return (NULL);
	}
	return (new_string);
}
