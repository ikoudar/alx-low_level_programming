#include <stdio.h>
#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/* descriptive Program: 0-positive_or_negative.c */
/**
*main function is the entry point of the program.
*
*Description: Generates a random number and determines
*if it is positive, zero, or negative.
*
*Return: always 0
*/
=======
/**
 * main - Entry point of the program
 *
 * This function generates a random number and determines if it is positive,
 * negative, or zero. It then prints the corresponding message.
 *
 * Return: Always 0 (Success)
 */
>>>>>>> 55dc7bb914ef984f06804823eff38372eee54f0c
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
