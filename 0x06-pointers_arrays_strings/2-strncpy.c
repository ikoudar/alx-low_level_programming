#include "main.h"

/**
  *_strncpy- function that copies string.
  *@src: source
  *@dest: destination
  *@n: number of byte
  *Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
	}

	return (dest);
}
