#include "lists.h"
/**
 * free_listint - free the list
 * @head: pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
	current = head;
	head = head->next;
	free(current);
	}
}
