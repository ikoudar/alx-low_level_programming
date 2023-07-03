#include <stdio.h>
#include "main.h"

/**
  *print_triangle- function that prints a triangle, followed by a new line.
  *
  *@size: is the size of the triangle.
*/

void print_triangle(int size)
{
	int s = size - 1;
	int h = 1;
	int k = 0;
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (a = 1; a < size; a++)
	{
		for (b = 1; b < s; b++)
		{
			_putchar(' ');
		}
		for (k = 0; k < h; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
		s--;
		h++;
	}
}
