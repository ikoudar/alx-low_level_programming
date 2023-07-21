#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
  *print_numbers- function that prints numbers, followed by a new line.
  *@n: numbers
  *@separator: string to be printed
  *
  *Return: avoid
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list abc;

	va_start(abc, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(abc, int));

		if (separator != NULL && i != n - 1)
		printf("%s", separator);
	}

	printf("\n");

	va_end(abc);
}
