#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main- the entry point to the program
  *@argc: argument count
  *@argv: argument vector
  *
  *Return: 0
*/

int main(int argc, char *argv[])
{
	int sum = 0;

	int i;
	int j;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}

			result = result * 10 + (argv[i][j] - '0');
		}
		sum += result;
		result = 0;
	}
	printf("%d\n", sum);

	return (0);
}
