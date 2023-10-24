#include "lists.h"
/**
 * free_listint2 - free list
 * @head: head
 * Return: no
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
	current = *head;
	*head = (*head)->next;
	free(current);
	}
	free(*head);
	*head = NULL;
}
