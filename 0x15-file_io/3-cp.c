#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void new_buffer(int stat, int fd, char *filename, char file);

/**
  *new_buffer- check the statut of the file.
  *@stat: file to be open
  *@fd: file
  *@filename: the name of the file
  *@file: statut of the file
  *Return: void
*/

void new_buffer(int stat, int fd, char *filename, char file)
{
	int C;

	if (file == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd FD_VALUE %d\n", fd);
		exit(100);
	}
	else if (file == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (file == 'W' && stat == -1)
	{
		drpintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
  *main- the entry point to the program
  *@argc: argument count
  *@argv: argument passed
  *Return: 0
*/

int main(int argc, char *argv[])
{
	int src, dest, buf_read = 1024, wrote, close_src, close_dest;
	unsigned int file;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[2], O_RDONLY);
	new_buffer(src, -1, argv[1], '0');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file);
	new_buffer(dest, -1, argv[2], 'W');

	while (buf_read == 1024)
	{
		buf_read = read(src, buffer, sizeof(buffer));
		if (buf_read == -1)
			new_buffer(-1, -1, argv[1], '0');
		worte = write(dest, buffer, argv[2], buf_read)
			if (wrote == -1)
				new_buffer(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	new_buffer(close_src, src, NULL, 'C');
	close_dest = close(dest);
	new_buffer(close_dest, dest, NULL, 'C');

	return (0);
}
