#include "lists.h"
/**
 * insert_nodeint_at_index - anywhere
 * @head: head
 * @idx: is  the one
 * @n: is n
 * Return: okay
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;

	if (idx == 0)
	{

		new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
	}

	listint_t *current;
	
	*current = *head;
	for (unsigned int i = 0; i < idx - 1; i++)
	{
	if (current == NULL)
		return (NULL);
	current = current->next;
	}

	if (current == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
