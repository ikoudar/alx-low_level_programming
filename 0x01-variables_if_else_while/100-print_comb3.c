#include <stdio.h>
/**
  *main - entry point to the program.
  *
  *Return: 0 successful execution
*/
int main(void)
{
	int a = '0';
	int b = '1';


	for (a = 0; a < 9; a++)
	{
		for (b = 1; b = a + 1; b++)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);

}
