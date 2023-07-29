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
	size_t j = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		j++;
	}
	return (j);
}
