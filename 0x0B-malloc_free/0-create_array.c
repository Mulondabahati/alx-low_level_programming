#include <stdlib.h>
/**
 * create_array - we are creating an array
 * @size: sife of an int
 * @c: a character
 *
 * Return: a character pointer
 */
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *array;

	if (size == 0)
	{
	return (NULL);
	}

	array =malloc(size * sizeof(char));

	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}

	return (array);
}
