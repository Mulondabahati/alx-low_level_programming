#include <stdio.h>
/**
 * main - this is the main function
 * @argc: number of command lines
 * @argv: array that contains the number of command line
 *
 * Return: (0) if successfull
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
