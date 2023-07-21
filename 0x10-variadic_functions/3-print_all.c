#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
  *print_all- function print all.
  *
  *
  *@format: ...
  *Return: avoid
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	va_list abc;

	va_start(abc, format);

	while ((format != NULL) && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(abc, int));
				break;

			case 'i':
				printf("%d", va_arg(abc, int));
				break;

			case 'f':
				printf("%f", va_arg(abc, double));
				break;

			case 's':
				s = va_arg(abc, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;

			default:
				break;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(abc);
}
