#include "main.h"
/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: number of bits
 * @m: the flip of number from one to another
 * Return: the number of bit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	size_t i = 0;
	unsigned long int sum;

	sum = n ^ m;
	while (sum > 0)
	{
		i += sum & 1;
		sum >>= 1;
	}
	return (i);
}
