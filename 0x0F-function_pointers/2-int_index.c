#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *int_index- .....
  *@cmp: .....
  *@size: ......
  *@array: ....
  *Return: -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
