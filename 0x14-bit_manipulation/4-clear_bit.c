#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: of the bit
 * Return: 1 on success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	size_t mask;

	if (index >= sizeof(size_t) * 8 - 1)
		return (-1);
	mask = 1;
	mask <<= index;
	mask = ~mask;
	*n = (*n & mask);
	return (1);
}
