#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
  *sum_them_all- function that returns the sum.
  *
  *@n: number of variable
  *@...: ...
  *Return: 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list abc;
	int sum = 0;
	unsigned int i;

	va_start(abc, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(abc, int);
	}
	va_end(abc);

	return (sum);
}
