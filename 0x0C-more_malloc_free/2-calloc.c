#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _calloc - creates a memory
 * @nmemb: number of elements
 * @size: size of the variable in bytes
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_size);

	return (ptr);
}
