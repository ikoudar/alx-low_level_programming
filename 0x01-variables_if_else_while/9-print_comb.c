#include <stdio.h>
/**
 * main - entry point to the program
 *
 * Return: 0 on successful execution
*/
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');

		if (0 < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
