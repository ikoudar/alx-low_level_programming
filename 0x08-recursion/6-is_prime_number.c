#include "main.h"
#include <stdio.h>

/**
  *is_prime_number- function that returns 1 if the input integer.
  *@n: number.
  *Return: 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_number(n));
}
