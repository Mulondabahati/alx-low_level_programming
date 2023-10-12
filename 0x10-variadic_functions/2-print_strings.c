#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separates two strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *ptr;
	va_list makolo;

	va_start(makolo, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(makolo, char *);

		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(makolo);
}
