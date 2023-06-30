#include <stdlib.h>
#include "main.h"

/**
  *_strncat- function that concatenates two strings.
  *
  *@src: source
  *@dest: destination
  *@n: number of bytes
  *Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		n--;
	}
	*dest = '\0';

	return (dest);
}
