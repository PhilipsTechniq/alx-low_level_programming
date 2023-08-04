#include "main.h"
/**
 * _abs - Entry point
 * @c: Compute number
 * Return: Value of number or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
		int x;

		x = c * -1;
		return (x);
	}
	return (c);
}
