#include <stdio.h>

/**
  *main- the entry point to the program.
  *
  *fibonacci suit numbers.
  *Return: 0
*/

int main(void)
{
	int i = 0;
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long fib;

	for (i <= 97)
	{
		fib = a + b;
		if (i < 97)
		{
			printf("%lu, ", fib);
		}
		else
		{
			printf("%lu", fib);
		}
		a = b;
		b = fib;
		i++;
	}

	printf("\n");
	return (0);
}
