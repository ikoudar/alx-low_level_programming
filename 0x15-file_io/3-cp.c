#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buf(char *file);
void close_file(int fd);

/**
  *create_buf- allocate 1024 byte.
  *@file: name of the file
  *
  *Return: buf
*/

char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to NAME_OF_THE_FILE %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
  *close_file- close file.
  *
  *@fd: file to be closed.
  *
*/

void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd FD_VALUE %d\n", fd);
		exit(100);
	}
}

/**
  *main- copy content
  *@argc: argument c
  *@argv: argument v
  *Return: 0
*/

int main(int argc, char *argv[])
{
	int from, to, r;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		r = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}

	while (r > 0);
	free(buf);
	close_file(from);
	close_file(to);

	return (0);
}
