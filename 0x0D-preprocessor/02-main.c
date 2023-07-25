#include <stdio.h>
#include <stdlib.h>

/**
  *main- the entry point to the program.
  *
  *Return: 0
*/

int main(void)
{
	const char *filename = __FILE__;
	int i = 0;

	while (filename [i] != '\0')
	{
		putchar(filename[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
