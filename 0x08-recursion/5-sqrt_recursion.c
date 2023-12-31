#include "main.h"
#include <stdio.h>

/**
  *_sqrt_recursion- function that returns the natural square root of a number.
  *@n: number to calculate.
  *Return: natural square.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt_recursion(n));
}
