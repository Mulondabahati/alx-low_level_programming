#include "lists.h"
/**
 * add_node_end - this adds a node at the end
 * @head: 
list_t *add_node_end(list_t **head, const char *str);
/**
 * len - string length
 *
 * @str: string whose length is to be found
 * Return: amount of element
 */
int len(comst char *str)
{
	int i;

	if (str == '\0')
		return (0);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
