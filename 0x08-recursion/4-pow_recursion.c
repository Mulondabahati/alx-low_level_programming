#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - returns the value of a number raised to some power
 * @x: an int
 * @y: an int
 *
 * Return: the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
