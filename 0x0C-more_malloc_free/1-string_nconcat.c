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
	size_t len_s1, len_s2, sum_length;
	char *result;


	if (s1 == NULL)
		s1 =  "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;

	result = (char *)malloc(sum_length + 1);

	if (result == NULL)
		return (NULL);


	return (result);
}
