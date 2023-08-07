#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of char and assign char c
 * @size: The size of the array
 * @c: The char to initialize the array with
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ar[i] = c;
	return (ar);
}
