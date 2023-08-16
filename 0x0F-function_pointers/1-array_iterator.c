#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter element of array
 * @array: array element
 * @size: size of element
 * @action: pointer to print
 * Return: success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
