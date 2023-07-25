#include <stdlib.h>
#include <stdio.h>
/**
  *main- the entry point to the program.
  *
  *
  *Return: 0.
*/

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
