#include <stdio.h>
/**
 * main - entry point to the program
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z' ; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);

}
