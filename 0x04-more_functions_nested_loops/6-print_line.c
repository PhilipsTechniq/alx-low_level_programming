#include "main.h"
/**
 * print_line - Draw a straight line
 * @n: Times the character
 * Retrun: Always 0
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
