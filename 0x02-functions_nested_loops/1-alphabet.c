#include "main.h"


/**
 * print_alphabet - Prints the English alphabet in lowercase.
 *
 * This function prints the English alphabet in lowercase letters,
 * starting from 'a' and ending with 'z'.
 */

void print_alphabet(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
	{
		_putchar(L);
	}
	_putchar('\n');
}
