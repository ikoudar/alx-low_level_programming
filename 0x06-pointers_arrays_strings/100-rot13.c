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
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = h_2(str[i]);
		i++;
	}

	return (str);
}

/**
  *h_2- helper
  *@s: charater
  *
  *Return: J
*/

char h_2(char s)
{
	char a[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	char j = s;

	while (i < 52)
	{
		if (s == a[i])
		{
			j = b[i];
			break;
		}
		i++;
	}
	return (j);
}
