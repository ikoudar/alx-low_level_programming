#include <stdio.h>
#include "main.h"

/**
  *times_table- function that prints the 9 times table, starting with 0.
  *
*/

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int result = a * b;

			printf("%2d ", result);
		}
		printf("\n");
	}
}
