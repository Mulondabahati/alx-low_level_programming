#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: string
 * @n: number of args
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *mk;

	va_list mb;

	va_start(mb, n);

	for (i = 0; i < n; i++)
	{
		mk = va_arg(mb, char *);

		if (mk == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", mk);
		}
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(mb);
}
