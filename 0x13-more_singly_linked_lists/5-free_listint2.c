#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *free_listint2-  function that frees a list
  *
  *@head: head of list
  *Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *k, *temp;

	if (head == NULL)
		return;

	k = *head;

	while (k != NULL)
	{
		temp = k->next;
		free(k);
		k = temp;
	}

	*head = NULL;
}
