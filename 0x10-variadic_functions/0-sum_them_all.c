#include "variadic_functions.h"
/**
 * sum_them_all - sum up all the args passed to it
 * @n: number if the args
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list makolo;

	va_start(makolo, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
			return (0);
		else
		{
			sum += va_arg(makolo, const unsigned int);
		}
	}
	va_end(makolo);
	return (sum);
}
