#include "main.h"
/**
 * _isalpha - Entry point
 * @c: check character
 * Return: 1 for char or 0 for else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
