#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		putchar('\n');
	}
}
