#include <stdio.h>
#include <stdlib.h>
/**
 * maim - this multiply two numbers
 * @argv: argument vector
 * @argc: argument count
 * Return: (0) or (1)
 */
int main(int argc, char *argv[])
{
	int i;

	i = atoi(argv[1]) * atoi(argv[2]);
	if (argc == 3)
	{
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
