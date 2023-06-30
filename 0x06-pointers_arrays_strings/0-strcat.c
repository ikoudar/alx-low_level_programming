#include "main.h"

/**
  *_strcat- function that concatenates two string.
  *
  *@src: source string
  *@dest: destination string
  *
  *Return: result
*/

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (0);
}
