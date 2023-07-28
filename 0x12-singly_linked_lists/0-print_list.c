#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *print_list- function that prints all the elements of a list.
  *@h: head of th list
  *
  *
  *Return: j
*/

size_t print_list(const list_t *h)
{
	const list_t *c = h;
	size_t j = 0;

	while (c != NULL)
	{
		if (c->str != NULL)
		{
			printf("[%d] %s\n", c->len, c->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		j += 1;
		c = c->next;
	}
	return (j);
}
