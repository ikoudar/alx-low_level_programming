#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
  *main - entry point to the program
  *
  *Return: 0 successful excecution
*/
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)

		putchar(a);

	if (a != 9)
	{
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
