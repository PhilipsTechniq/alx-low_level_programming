#include <stdio.h>
/**
 * main - prints all arguments entered
 * @argc: The number of command-line arguments
 * @argv: the array
 * Return: void
 */
int main(int argc, char *argv[])
{
	int x = 0;

	while (x < argc)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
