#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void new_buffer(int stat, int fd, char *filename, char file);

/**
 *main- the entry point to the program
 *@argc: argument count
 *@argv: argument passed
 *Return: 0
*/

int main(int argc, char *argv[])
{

	int src, dest, buf_read = 1024, wrote, close_src, close_dest;
	unsigned int files = 0644;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	new_buffer(src, -1, argv[1], 'O');
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, files);
	new_buffer(dest, -1, argv[2], 'W');
	while (buf_read == 1024)
	{
		buf_read = read(src, buffer, sizeof(buffer));
		if (buf_read == -1)
			new_buffer(-1, -1, argv[1], 'O');

		wrote = write(dest, buffer, buf_read);
			if (wrote == -1)
				new_buffer(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	new_buffer(close_src, src, NULL, 'C');
	close_dest = close(dest);
	new_buffer(close_dest, dest, NULL, 'C');

	return (0);
}

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
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
