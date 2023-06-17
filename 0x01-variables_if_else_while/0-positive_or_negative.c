#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * This function generates a random number and determines if it is positive,
 * negative, or zero. It then prints the corresponding message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("n is %d\n", n);
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
