#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
  *listint_len- function that returns the number of elements in a linked
  *
  *@h: head of the list
  *
  *Return: i
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *k = h;
	size_t i = 0;

	while (k != NULL)
	{
		i += 1;
		k = k->next;
	}
	return (i);
}
