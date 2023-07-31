#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *sum_listint- unction that returns the sum of all the data (n) of a list.
  *
  *@head: head of list
  *
  *Return: nbr
*/

int sum_listint(listint_t *head)
{
	listint_t *k = head;
	size_t nbr = 0;

	while (k != NULL)
	{
		nbr += k->n;
		k = k->next;
	}
	return (nbr);
}
