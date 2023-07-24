#include "main.h"
#include <stdio.h>
#include <time.h>
/**
  *print_times_table- function that prints the n times table,
  *starting with 0.
  *@n: number of repetition.
  *Return: 0.
*/

void print_times_table(int n)
{
	int a, b;
	int w = 1;
	int max_numb = n * n;

	if (n < 0 || n > 15)
	{
		return;
	}

	while (max_numb >= 10)
	{
		w++;
		max_numb /= 10;
	}

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= 10; b++)
		{
			printf("%*d", w, a * b);

			if (b < n)
			{
				printf(", ");
			}
		}

		printf("\n");
	}
}
