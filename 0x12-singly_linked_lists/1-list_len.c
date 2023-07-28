#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *list_len- function that returns the number of elements in a linked
  *
  *@h: head of the list
  *
  *Return: 0
*/

size_t list_len(const list_t *h)
{
	size_t j = 0;

	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
