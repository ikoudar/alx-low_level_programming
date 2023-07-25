#include <stdio.>

/**
  *main- the entry point to the program
  *
  *fibonacci suit numbers
  *Return: 0
*/

int main(void)
{
	int i;
	unsigned long a = 0, b = 1, c;

	for (i = 0; i < 50; i++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;

	if (i == 49)

		printf("\n");
	else
		printf(", ");
	}
	return (0);
}
