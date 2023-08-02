#include "main.h"
/**
 * _sqrt_recursive - Calculate the natural square root of a number
 * @n: input number to find sqaure root
 * @s: starting point
 * Return: the result
 */
int _sqrt_recursive(int n, int s)
{
	if (s * s > 0)
		return (-1);
	if (s * s == n)
		return (s);
	return (_sqrt_recursive(n, s + s));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Number the find sqaure root
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursive(n, 0));
}
