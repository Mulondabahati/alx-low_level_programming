#include "main.h"
/**
 * _strlen - function that return length of string
 *
 * @s: character of string
 *
 * Return: (0)
 */
int _strlen(char *s)
{
	int total_len;

	total_len = 0;
	while (s[total_len] != '\n')
	{
		total_len++;
	}
	return (total_len);
}
