#include "main.h"
#include <stdio.h>

/**
  *
  *
*/

void print_times_table(int n)
{
	int a, b;

	for (n < 0 || n > 15)
	{
		return;
	}

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			printf("%d\t", a *b);
		}

		printf("\n");
	}
}
