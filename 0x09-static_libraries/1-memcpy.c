#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: adding into memory area
 * @src: remove from memory area
 * @n: byte to be copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
