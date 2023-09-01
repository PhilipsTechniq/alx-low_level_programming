#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 1 for large endian, otherwise 0
 */
int get_endianness(void)
{
	size_t num = 1;
	char *c = (char *)&num;

	return (*c);
}
