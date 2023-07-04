#include <stdio.h>
#include "main.h"
/**
  *reverse_array- function that reverses the content of an array of integers.
  *@n: is the number of elements of the array.
  *@a: element of the array.
  *
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;

		i++;

		j--;
	}
}
