#include <stdio.h>
#include "main.h"

/**
  *print_array - prints elements on an array integers.
  *
  *@a: element of an array integeres.
  *@n: number of element.
  *
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i !=  n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
