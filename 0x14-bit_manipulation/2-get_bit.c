#include "main.h"
#include <stdio.h>

/**
  *get_bit- function that returns the value of a bit at a given index.
  *@n: number
  *@index: index is the index, starting from 0 of the bit you want.
  *
  *Return: return value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
