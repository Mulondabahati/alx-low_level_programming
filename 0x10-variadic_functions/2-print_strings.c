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

		if (i != n && separator != NULL)
		{
			printf("%s", separator);
		}
		if (mk == NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", mk);
		}
	}
	printf("\n");
	va_end(mb);
}
