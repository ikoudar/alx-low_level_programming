#include "main.h"


/**
  *print_alphabet_x10: print alphabet 10 times
  *
  *Return: avoid
*/

void print_alphabet_x10(void)
{
	char c;
	int i = 9;

	while (i <= 10)
	{
		c = 'a';
		while (c = 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
