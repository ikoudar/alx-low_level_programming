#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *get_nodeint_at_index- function that returns the nth node of a list.
  *
  *@head: head of the list
  *@index: index of node
  *Return: k
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *k = NULL;
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i <= index)
		{
			if (i == index)
			{
				k = head;
				break;
			}
			head = head->next;
			i++;
		}
		else
			return (NULL);
	}
	return (k);
}
