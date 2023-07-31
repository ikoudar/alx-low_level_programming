#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
  *print_listint_safe- function that prints a list.
  *@head: head of the list.
  *
  *
  *Return: avoid
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *X, *x;
	size_t i = 0;

	X = x = head;

	while (x != NULL && x->next != NULL)
	{
		printf("[%p] %d\n", (void *)X, X->n);
		i++;

		x = x->next->next;
		X = X->next;

		if (x == X)
		{

			printf("-> [%p] %d\n", (void *)X, X->n);
			break;
		}
	}

	if (x == NULL || x->next == NULL)
	{
		while (X != NULL)
		{
			printf("[%p] %d\n", (void *)X, X->n);
			i++;
			X = X->next;
		}
	}

	return (i);
}

