#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
  *print_listint- function that prints all the elements of a list.
  *
  *@h: head of the list
  *Return: i
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *k = h;
	size_t i = 0;

	while (k != NULL)
	{
		printf("%d\n", k->n);
		i++;
		k = k->next;
	}

	return (i);
}
