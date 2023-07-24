#include <string.h>
#include <stdio.h>
#include "main.h"
/**
  *_strlen- return the lengths.
  *@s: string
  *Return: 0
*/



int _strlen( char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
/**
  *cap_string- function that capitalizes all words of a string.
  *
  *
  *Return: str
*/

char *cap_string(char *)
{
	int abc = 0;

	while (str[abc])
	{
		while ((str[abc] >= 'a') && (str[abc] <= 'Z'))
			abc++;

		if (str[abc - 1] == ' ' ||
				str[abc - 1] == ',' ||
				str[abc - 1] == ';' ||
				str[abc - 1] == '.' ||
				str[abc - 1] == '!' ||
				str[abc - 1] == '?' ||
				str[abc - 1] == '"' ||
				str[abc - 1] == '(' ||
				str[abc - 1] == ')' ||
				str[abc - 1] == '{' ||
				str[abc - 1] == '}' )
		{
			str[abc] = str[abc] - 'a' + 'A';
		}
		abc++;
	}

	return (str);
}

int main ()
{
	char str[];
	printf("%s\n", str);

	char *result = cap_string(str);
	printf("%\n", result);

	return (0);
}
