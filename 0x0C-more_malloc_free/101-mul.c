#include "main.h"
#include <stdlib.h>
/**
 * is_digit - checks if a string contains a non-digit char
 * @s: the string to check
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);
		s++;
	}
	return (1);
}

/**
 * main -  multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 98 if number are incorrect, 0 on success
 */
int main(int argc, char *argv[])
{
	char *tstr;
	unsigned long int num1 = strtoul(argv[1], NULL, 10);
	unsigned long int num2 = strtoul(argv[2], NULL, 10);
	unsigned long int total = num1 * num2;
	unsigned long int x = total;
	int i, j = 1;

	if (argc != 3)
	{
		return (98);
	}
	if (!is_digit(argv[1]) || !is_digit(argv[2]))
	{
		return (98);
	}

	while (x >= 10)
	{
		x /= 10;
		j++;
	}

	tstr = (char *)malloc((j + 1) * sizeof(char));

	if (tstr == NULL)
	{
		return (98);
	}
	snprintf(tstr, j + 1, "%lu", total);

	for (i = 0; i < j; i++)
	{
		_putchar(tstr[1]);
	}
	_putchar('\n');
	free(tstr);
	return (0);
}
