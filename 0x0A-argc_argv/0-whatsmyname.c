#include <stdio.h>
/**
 * main - print the name of a program, follow by a new line
 * @argc: number of arguments to print
 * @argv: arrays of arguments
 * Return: void
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}
