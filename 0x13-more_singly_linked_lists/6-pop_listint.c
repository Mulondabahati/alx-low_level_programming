#include "lists.h"
/**
 * pop_listint - jmakolo
 * @head: head
 * Return: hed
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
	return (0);
	}

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
