#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *pop_listint-  function that deletes the head node of a list.
  *
  *@head: head of the list
  *
  *Return: i
*/

int pop_listint(listint_t **head)
{
	listint_t *bip;
	int i;

	if (*head == NULL)
		return (0);

	bip = *head;
	i = bip->n;
	free(bip);

	*head = (*head)->next;
	return (i);
}

