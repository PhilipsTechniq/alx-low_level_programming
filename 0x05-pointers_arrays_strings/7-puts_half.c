#include "main.h"
/**
 * puts_half - print second half of the string
 * @str: half of a string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int i, j, k = 0;

	for (i = 0; str[i] != '\n'; i++)
		k++;
	j = (k - 1) / 2;
	for (i = j + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
