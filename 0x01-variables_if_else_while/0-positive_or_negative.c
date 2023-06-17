#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main function is the entry point of the program.
*
* Program: 0-positive_or_negative.c
*
* Description: Generates a random number and determines if it is positive, zero, or negative.
*
* Returns:
*   0 - Successful execution.*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	n = 0;
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}

	return (0);
}
