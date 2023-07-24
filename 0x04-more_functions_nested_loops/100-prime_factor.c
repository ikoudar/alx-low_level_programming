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
	int i = 2;

	while (i++ < n / 2)
	{
		if (n % i == 0)
			if (n % 1 == 0)
			{
				n /= 2;
				continue;
			}
		for (i = 3; i < n; i +=2)
		{
			if (n % i == 0)
				n /= i;
		}
	}

	printf("%ld\n", n);
	return (0);
}
