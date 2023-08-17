#include "function_pointers.h"
/**
 * main - prints the opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 * Return: void
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < j; i++)
	{
		if (i == j - 1)
		{
			printf("%2hhx\n", arr[1]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
