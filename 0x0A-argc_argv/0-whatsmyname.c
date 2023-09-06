#include <stdio.h>
/**
 * main - prints it's name, followed by a new line
 *
 * @argc: number of commend line argumentarguments
 * @argv: the array that contains the command line arguments
 *
 * Return: (0) when successful
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
