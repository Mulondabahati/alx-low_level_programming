#include "lists.h"
/**
 * list_len - returns the number of nodes
 * @h: the head
 * Return: the number if nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}

	return (count);
}
