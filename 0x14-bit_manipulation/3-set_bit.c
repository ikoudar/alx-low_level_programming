#include "main.h"
#include <stdio.h>

/**
  *set_bit- function that sets the value of a bit to 1 at a given index.
  *
  *@n: number
  *@index: index is the index, starting from 0 of the bit you want.
  *Return: the right value
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n|= (1 << index);
	return (1);
}
