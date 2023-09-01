#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the bit
 * @index: of a bit to set
 * Return: 1 on success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	size_t mask;

	if (index >= (sizeof(size_t) * 8 - 1))
		return (-1);

	mask = 1;
	mask <<= index;
	*n = (*n | mask);
	return (1);
}
