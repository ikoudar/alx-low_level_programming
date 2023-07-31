#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *print_listint_safe- function that prints a list
  *
  *@head: head of the list
  *
  *Return: avoid
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *k = head;
	size_t i = 0;

	recto_t *verso = NULL;

	verso = recto_create(1024);

	if (verso == NULL)
		exit(98);

	while (k != NULL)
	{
		if (recto_get(verso, k) != NULL)
		{
			printf("[%p] %d\n", (void *)k, k->n);
			break;
		}

		recto_set(visited, k, (void *)1);
		printf("[%p] %d\n", (void *)k, k->n);
		i++;
		k = k->next;
	}
	while (k != NULL)
	{
		printf("[%p] %d\n", (void *)k, k->n);
		i++;
		k = k->next;
	}

	recto_delete(verso);
	return (i);
}
