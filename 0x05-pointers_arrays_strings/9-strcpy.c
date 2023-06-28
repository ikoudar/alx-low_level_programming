#include "main.h"

/**
  *_strcpy - function that copy the string pointer.
  *
  *@dest: the value pointed.
  *@src: string pointed.
  *
  *Return: original_dest
*/
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (original_dest);
}
