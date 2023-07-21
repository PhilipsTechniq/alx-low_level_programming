#include "main.h"
/**
 * _isdigit - Check digit
 * @c: Check character
 * Return: 1 for digit character or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
