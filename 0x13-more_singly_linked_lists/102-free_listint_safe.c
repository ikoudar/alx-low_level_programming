#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *free_listint_safe-function that prints a list
  *
  *@h: head of the list
  *
  *Return: len
*/

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int i;

	listint_t *temp;

	if (!h || *h)
		return (0);

	while (!h)
	{
		i = *h - (*h)->next;
		if (i > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
