#include "variadic_functions.h"
/**
 * print_numbers - print the numbers
 * @separator: separates the numbers
 * @n: number of args
 * Return: (0) success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list holder;

	va_start(holder, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(holder, const unsigned int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(holder);
}
