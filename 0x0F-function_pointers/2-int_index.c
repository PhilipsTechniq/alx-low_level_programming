#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: size of element in array
 * @cmp: pointer to the comparison function
 * Return: index of element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if ( array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-i);
}
