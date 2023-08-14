#include <stdio.h>
/**
 * main - print numbers separated with commas and spaces
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		if (numbers <= '8')
		{
			putchar(',');
			putchar(' ');
		}
		numbers++;
	}
	putchar('\n');
	return (0);
}
