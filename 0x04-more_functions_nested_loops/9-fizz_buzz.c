#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *program that prints the numbers from 1 to 100, followed by a new line.
  *
  *print_numbers: function that prints "Fizz-Buzz".
  *
  *@i: numbers
  *@n: number of times.
  *
*/
int main (void)
{
	int a = 1;

	while (a++ < 100)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz ");
		}

		else if ((a % 5) == 0)
		{
			if (a != 100)
		{
			printf("Buzz ");
		}

		else 
		{
			printf("Buzz");
		}
		}

	else
	{
		printf("%d", a);
	}
	}
	printf("\n");

	return (0);
}
