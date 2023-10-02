#include "main.h"
/**
 * _strncat - a function that concatinate two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: no of elements to concaninate from the src
 * Return: desr + n of the src
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}
	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
