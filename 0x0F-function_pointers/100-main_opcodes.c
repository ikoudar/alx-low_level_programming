#include <stdio.h>
#include <stdlib.h>
/**
  *main- the entry point to the program.
  *
  *print_opcodes- program print codes.
  *@num_bytes: number of bytes
  *Return: 0
*/
void print_opcodes(int num_bytes)
{
	unsigned char *main_ptr = (unsigned char *)print_opcodes;

	int i = 0;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", *(main_ptr + i));
	}
	printf("\n");
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error: Incorrect number of arguments.\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error: Number of bytes must be positive.\n");
		return (2);
	}

	print_opcodes(num_bytes);

	return (0);
}
