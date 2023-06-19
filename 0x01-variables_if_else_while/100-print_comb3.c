#include <stdio.h>
/**
  *main - entry point to the program.
  *
  *Return: 0 successful execution
*/
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i; j = i + 1; j++)
		{
			putchar(i);
			putchar(j);

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);

}
