#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - makolo knows
 * @head: head
 * @index: index
 * Return: null
 */
listint_t* get_nodeint_at_index(listint_t* head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head== NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
