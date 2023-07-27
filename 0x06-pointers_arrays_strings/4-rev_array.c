#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of integers
 * @n: Number of elements
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int k;

	while (i < j)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		i++;
		j--;
	}
}
