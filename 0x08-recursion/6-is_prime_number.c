#include "main.h"
#include <stdio.h>
/**
 * makolo - computes if n is prime
 * @n: the number to be checked
 * @div: a divisor
 * Return: if prime 1 or 0
 */
int makolo(int n, int div)
{
	if (n < 2)
	{
		return (0);
	}
	if (div == 1)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}
	return (makolo(n, div - 1));
}
/**
 * is_prime_number - detects if it is a prime number
 * @n: input value
 * Return: a value
 */
int is_prime_number(int n)
{
	return (makolo(n, n / 2));
}
