#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  *find_listint_loop- function that finds the loop in a linked list.
  *
  *@head: the head of the list
  *
  *Return: nothing
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hip = head;
	listint_t *hop = head;

	if (!head)
		return (NULL);
	while (hip && hop && hop->next)
	{
		hop = hop->next->next;
		hip = hip->next;

		if (hop == hip)
		{
			hip = head;
			while (hip != hop)
			{
				hip = hip->next;
				hop = hop->next;
			}
			return (hop);
		}
	}
	return (NULL);
}
