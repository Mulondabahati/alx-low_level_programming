#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural sqrt
 * @n: the number
 *
 * Return: the sqrt or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1));
	}
}
/**
 * _sqrt_helper - helps the function above
 * @n: input number
 * @a: the sqrt value
 * Return: an int
 */
int _sqrt_helper(int n, int a)
	{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(n, a + 1));
	}
}
