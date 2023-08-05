#include <stdio.h>
/**
 * main - Print the number of argument
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 * Return: void
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
