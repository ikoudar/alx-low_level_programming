#include <stdio.h>
/**
 * main - entry point to the program
 *
 * Return: 0 on successful execution
*/

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'm'; alpha++)
	{
		putchar(alpha);
	}
	for (alpha = 'n'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
