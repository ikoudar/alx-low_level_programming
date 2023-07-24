#include <stdio.h>

/**
  *main- prints teh largest prime factor.
  *
  *
  *
  *Return: 0.
*/

int main(void)
{
	long n = 612852475143;
	long largest_prime = 0;
	int i = 2;

	while (n > 1)
	{
		if (n % i == 0)
		{
			largest_prime = i;
			while (n % 1 == 0)
				n /= i;
		}

		i++;

		}
		printf("%ld\n", largest_prime);
		return (0);
}
