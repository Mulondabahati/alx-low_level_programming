#include <stdio.h>
/**
 * main - prints alpha in capsand low case
 *
 * Return: always (0)
 *
 */
int main(void)
{
	char Lower = 'a';
	char Upper = 'A';

	while (Lower <= 'z')
	{
		putchar(Lower);
		Lower++;
	}
	while (Upper <= 'Z')
	{
		putchar(Upper);
		Upper++;
	}
	putchar('\n');
	return (0);
}
