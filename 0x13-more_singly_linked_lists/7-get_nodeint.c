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
	unsigned int count = 0;
	listint_t* current;

	current = head;
	while (current != NULL)
	{
	if (count == index)
	{
	return (current);
	}
	count++;
	current = current->next;
	}

	return (NULL);
}
