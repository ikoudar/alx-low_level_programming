#include <stdio.h>

/**
  *main- the entry point to the program.
  *
  *fibonacci suit numbers.
  *Return: 0
*/

int main(void)
{
	int i;
	int count = 98;
	unsigned long first = 1;
	unsigned long second = 2;
	unsigned long fib;

	printf("%d, %d", firstn second);

	for (i = 2; i < count; i++)
	{
		fib = first + second;

		printf(", ");
		printf("%d", fib);

		first = second;
		second = fib;
	}

	printf("\n");
	return (0);
}
