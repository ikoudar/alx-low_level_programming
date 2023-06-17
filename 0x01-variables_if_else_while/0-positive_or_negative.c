#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* descriptive Program: 0-positive_or_negative.c */
/**
*main function is the entry point of the program.
*
*Description: Generates a random number and determines
*if it is positive, zero, or negative.
*
*Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
