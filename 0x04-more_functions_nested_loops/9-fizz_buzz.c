#include "main.h"
#include <stdlib.h>

/**
  *program that prints the numbers from 1 to 100, followed by a new line.
  *
  *print_numbers: function that prints "Fizz-Buzz".
  *
  *@i: numbers
  *@n: number of times.
  *
*/

void print_numbers(int i)
{
	int temp = i;

	if (i == 0)
	{
		_putchar('0');
		return;
	}
	while (temp != 0)
	{
		int digit = temp % 10;

		_putchar(digit + '0');

		temp /= 10;
	}
}
