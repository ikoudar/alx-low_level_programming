#include "main.h"
#include <stdio.h>
/**
  *reverse_array- function that reverses the content of an array of integers.
  *@n: is the number of elements of the array.
  *@a: element of the array.
  *
*/
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)

	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
