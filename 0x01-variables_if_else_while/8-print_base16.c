#include <stdio.h>
/**
 * main - entry point to the program
 *
 * Return: 0 on successful execution
*/
int main(void)
{
	char i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	for (i = 0; i < 6; i++)
	{
		putchar(i + 'a');
	}

	putchar('\n');

	return (0);
}
