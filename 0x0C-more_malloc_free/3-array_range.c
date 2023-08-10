#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: the minimum included
 * @max: maximum value
 * Return: ar on succes or NULL on failure
 */
int *array_range(int min, int max)
{
	int s, i;
	int *ar;

	if (min > max)
		return (NULL);
	s = max - min + 1;
	ar = malloc(s * sizeof(*ar));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < s; i++)
		ar[i] = min + i;
	return (ar);
}
