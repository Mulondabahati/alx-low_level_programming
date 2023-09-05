#include "main.h"
/**
 * _strcpy - pointer
 *
 * @dest: string 1
 * @src: string 2
 * Return: character (dest)
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
