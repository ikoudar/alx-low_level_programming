#include "main.h"
#include <stdio.h>

/**
  *flip_bits- function that returns the number of bits you would,
  *need to flip to get from one number to another.
  *@n: first number
  *@m: last number
  *Return: the right number
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	int i = 0;

	while (flip)
	{
		if (flip & 1)
			i++;
		flip >>= 1;
	}
	return (i);
}
