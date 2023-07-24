#include "main.h"
#include <stdio.h>
#include <string.h>

/**
  *leet- leet encoder.
  *@str: string
  *Return: 0
*/

char *leet(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = h(str[i]);
		i++;
	}
	return (str);
}

/**
  *h- helper.
  *@s: character
  *
  *
  *Return: 0
*/

char h(char s)
{
	char map_low[8] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char map_up[8] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};

	int i = 0;

	char j = s;

	while (i < 8)
	{
		if (s == map_low[i] || s == map_up[i])
		{
			j = i + '0';
			break;
		}
		i++;
	}
	return (j);
}
