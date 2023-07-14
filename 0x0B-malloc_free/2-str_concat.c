#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *str_concat- function that concatenates two strings.
  *@s1: content 1.
  *@s2: content 2.
  *Return: concate
*/

char *str_concat(char *s1, char *s2)
{
	size_t len_s1;
	size_t len_s2;
	char *concate;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	concate = malloc((len_s1 + len_s2 + 1) * sizeof(char));
	if (concate == NULL)
	{
		return (concate);
	}

	strcpy(concate, s1);
	strcpy(concate, s2);

	return (concate);
}
