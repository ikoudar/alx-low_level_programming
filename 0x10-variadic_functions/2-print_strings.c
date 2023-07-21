#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
  *print_strings- function that prints strings, followed by a new line.
  *
  *@n: number of args
  *@separator: string@
  *Return: 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list abc;
	char *s;

	va_start(abc, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(abc, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(abc);
}
