#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _makolo - return a palindrome
 * @start: pointer to the beginning
 * @end: pointer to the end
 * Return: 1 or 0
 */
int _makolo(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start != *end)
	{
		return (0);
	}
	return (_makolo(start + 1, end - 1));
}
/**
 * is_palindrome - checks for palindrome
 * @s: input string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	return (_makolo(s, s + (strlen(s) - 1)));
}
