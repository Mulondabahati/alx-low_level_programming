#include "lists.h"
/**
 * listint_len - list the number of elements
 * @h: head node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}