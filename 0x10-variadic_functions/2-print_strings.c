#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separates two strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list makolo;

	va_start(makolo, n);
	for (i = 0; i < n; i++)
	{
		if (n == '\0')
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", va_arg(makolo, char *));
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(makolo);
}
