#include <stdio.h>
/**
 * main - entry point to the program
 *
 * Return: 0 on successful execution
*/
int main(void)
{
	char i;

	for (i = 0; i < 16; i++)
	{
		putchar(i + '0');
	}

	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
