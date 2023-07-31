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
	listint_t *k;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (*head != NULL)
		{
			k = *head;
			free(k);
			*head = (*head)->next;
		}

		*temp = NULL;
	}
}
