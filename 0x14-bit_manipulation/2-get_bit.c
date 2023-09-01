#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number of a bit
 * @index: of a given bit
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	size_t i = 0;

	if (index >= (sizeof(size_t) * 8))
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return (n & 1);
}
