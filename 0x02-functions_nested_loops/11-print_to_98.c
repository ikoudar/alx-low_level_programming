#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *print_to_98-  function that prints all natural numbers.
  *@n: number.
  *Return: 0.
*/

void print_to_98(int n)
{
	int i = 0;

	for (i = n; i < 99; i++)
	{
		printf("%d", i);

		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}
