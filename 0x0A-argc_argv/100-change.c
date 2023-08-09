#include <stdio.h>
#include <stdlib.h>
/**
 * get_minimum_coins - Calculate minimum number
 * @m: amount of money
 *
 * Return: minimum number of coin required
 */
int get_minimum_coins(int m)
{
	int x[] = {25, 10, 5, 2, 1};
	int y = sizeof(x) / sizeof(x[0]);
	int z = 0;
	int i;

	for (i = 0; i < y; i++)
	{
		while (m >= x[i])
		{
			m -= x[i];
			z++;
		}
	}
	return (z);
}

/**
 * main - prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array that point to the arguments
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int m, j;

	m = atoi(argv[1]);
	j = get_minimum_coins(m);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (m < 0)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", j);
	}
	return (0);
}
