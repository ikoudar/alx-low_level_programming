#include "main.h"

/**
  *print_number- function that prints an integer.
  *
  *@n: The integer to be printed.
*/

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return;
	}
	if (n >= 10)
	{
		_putchar(n / 10);
	}
	_putchar('\n');
}
