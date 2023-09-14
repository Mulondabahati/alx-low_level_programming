#include "variadic_functions.h"
/**
 * print_all - prints any arg
 * @format: the arg specifier
 *
 * Return: any arg given
 */
void print_all(const char * const format, ...)
{
	int i, check_stat;/* declaring variables */
	char *str;
	va_list spc;

	va_start(spc, format);/* initiallizing var arguments */
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(spc, int));
				check_stat = 0;/* check if condition has been mwr */
				break;
			case 'f':
				printf("%f", va_arg(spc, double));
				check_stat = 0;
				break;
			case 'c':
				printf("%c", va_arg(spc, int));
				check_stat = 0;
				break;
			case 's':
				str = va_arg(spc, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				check_stat = 1;
				break;
		}
		if (format[i + 1] != '\0' && check_stat == 0)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(spc);

}
