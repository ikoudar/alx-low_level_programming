#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *string_nconcat- function that concatenates two strings.
  *@s1: first character
  *@s2: second character
  *@n: number of bytes
  *
  *Return: result.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *st;
	unsigned int i = 0, j = 0, s_1 = 0, s_2 = 0;

	while (s1 && s1[s_1])
		s_1++;
	while (s2 && s2[s_2])
		s_2++;
	if (n < s_2)
		st = malloc(sizeof(char) * (s_1 + n + 1));
	else
		st = malloc(sizeof(char) * (s_1 + s_2 + 1));
	if (!st)
		return (NULL);
	while (i < s_1)
	{
		st[i] = s1[i];
		i++;
	}
	while (n < s_2 && i < (s_1 + n))
		st[i++] = s2[j++];
	while (n >= s_2 && i < (s_1 + s_2))
		st[i++] = s2[j++];
	st[i] = '\0';

	return (st);
}
