#include "main.h"
#include <stdio.h>

/**
  *print_number- function that prints an integer.
  *
  *@n: The integer to be printed.
*/

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -a;
	}

	if (a > 9)
	{
		print_number(a / 10);
	}
	_putchar('0' + a % 10);
}
