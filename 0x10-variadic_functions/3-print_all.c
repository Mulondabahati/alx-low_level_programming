#include "variadic_functions.h"
/**
 * print_all - this prints any thing
 * @format: this the type of data
 */
void print_all(const char * const format, ...)
{
	va_list makolo;

	va_start(makolo, format);

	const char *ptr = format;

	while (*ptr)
	{
		if (*ptr == 'c')
		{
			char c = va_arg(makolo, int);

			printf("%c", c);
		}
		else if (*ptr == 'i')
		{
			int i = va_arg(makolo, int);

			printf("%d", i);
		}
		else if (*ptr == 'f')
		{
			float f = va_arg(makolo, double);

			printf("%f", f);
		}
		else if (*ptr == 's')
		{
			char *s = va_arg(makolo, char *);

			if ('s' == NULL)
			{
			printf("(nil)");
			}

			printf("%s", s);
		}
		ptr++;
	}
	printf("\n");
	va_end(makolo);
}
