#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - the entry point of my program.
  *
  *Return: 0 always
  *
*/

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last_digit = n % 10;

	if (last_digit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	else if (n  == 0)
		printf("last digit of %d is %d and is 0\n", n);
	else
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);

	return (0);
}
