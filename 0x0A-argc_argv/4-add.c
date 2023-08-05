#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: The number of command-line arguments
 * @argv: An array
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int x = 0;
	int i, j, y;

	if (argc == 1)
	{
		printf("%d\n", x);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		j = 0;

		while (arg[j] != '\0')
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		y = atoi(arg);

		if (y < 0)
		{
			printf("Error\n");
			return (1);
		}
		x += y;
	}
	printf("%d\n", x);
	return (0);
}
