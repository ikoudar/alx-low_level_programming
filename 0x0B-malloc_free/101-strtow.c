#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *len- function that return str
 *@str: string to be counted
 *
 * Return: length
 */

int len(char *str)
{
	int len = 0;

	if (str != NULL)
	{
		while (str[len])
			len++;
	}
	return (len);
}

/**
 *nbr_w- function that counts the number of words in str
 *@str: string
 *
 *Return: str
 */
int nbr_w(char *str)
{
	int i = 0, w = 0;

	while (i <= len(str))
	{
		if ((str[i] != ' ') && (str[i] != '\0'))
		{
			i++;
		}
		else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
		{
			w += 1;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (w);
}

/**
 *strtow - splits a stirng into words
 *@str: string to be splitted
 *
 *Return: pointer to the array of splitted words
 */

char **strtow(char *str)
{
	char **split;
	int i, j = 0, temp = 0, size = 0, w = nbr_w(str);

	if (w == 0)
		return (NULL);
	split = (char **)malloc(sizeof(char *) * (w + 1));
	if (split != NULL)
	{
		for (i = 0; i <= len(str) && w; i++)
		{
			if ((str[i] != ' ') && (str[i] != '\0'))
				size++;
			else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
			{
				split[j] = (char *)malloc(sizeof(char) * size + 1);
				if (split[j] != NULL)
				{
					while (temp < size)
					{
						split[j][temp] = str[(i - size) + temp];
						temp++;
					}
					split[j][temp] = '\0';
					size = temp = 0;
					j++;
				}
				else
				{
					while (j-- >= 0)
						free(split[j]);
					free(split);
					return (NULL);
				}
			}
		}
		split[w] = NULL;
		return (split);
	}
	else
		return (NULL);
}
