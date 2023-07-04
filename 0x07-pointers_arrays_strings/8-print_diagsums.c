#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *print_diagsums- function that prints the sum of the two diagonals,
  *of a square matrix of integers.
  *@a: first diagonal
  *@size: second diagonal
*/

void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += *(a + i * size + i);
	}
	for (i = 0; i < size; i++)
	{
		s2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", s1, s2);
}
