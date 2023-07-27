#include <stdio.h>
#include <stdlib.h>
/**
  *main- the entry point to the program.
  *
  *@argv: argement v
  *@argc: argement c
  *Return: 0
*/
int main(int argc, char *argv[])
{
	unsigned char *s;
	int i = 0, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	s = (unsigned char *) main;
	bytes = atoi(argv[1]);
	for (; i < bytes; i++)
	{
		printf("%02x", *(s + i));
		if (i != bytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
