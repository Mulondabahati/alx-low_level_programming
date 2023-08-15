#include <stdio.h>
/**
 * main - print _putchar
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i;
	char str[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
