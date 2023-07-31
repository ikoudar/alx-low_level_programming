#include "lists.h"


/**
  *print_listint- function that prints all the elements of a list.
  *
  *@h: head of the list
  *Return: j
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *k = h;
	size_t i = 0;

	while (k != NULL)
	{
		printf("%d\n", k->n);
		i += 1;
		k = k->next;
	}
	return (i);
}
