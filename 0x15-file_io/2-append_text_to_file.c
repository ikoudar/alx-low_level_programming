#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
  *append_text_to_file- function that appends text at the end of a file.
  *
  *@filename: name of the file
  *@text_content: content of the file
  *Return: 1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wrote, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_WRONLY, O_APPEND);
	wrote = write(file, text_content, len);

	if (file == -1 || wrote == -1)
		return (-1);

	close(0);

	return (1);
}
