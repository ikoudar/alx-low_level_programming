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
	char *result;
	unsigned int j = 0;
	unsigned int i = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}

	if (n < len2)
	{
		result = (char *)malloc(sizeof(char) * (len1 + n + 1));
	}
	else
	{
		result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	}

	if (!result)
	{
		return (NULL);
	}

	while (i < len1)
	{
		result[i] = s1[i];
		i++;
	}

	while (j < n && s2[j])
		result[i++] = s2[j++];

	return (result);
}
