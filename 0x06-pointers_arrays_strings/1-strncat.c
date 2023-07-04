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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (n > 0 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';

	return (dest);
}
