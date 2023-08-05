#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;

	printf("%d\n", result);
	return (0);
}
