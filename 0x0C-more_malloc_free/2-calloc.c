#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: each elemnt
 * Return: pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int ts, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ts = nmemb * size;
	p = malloc(ts);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ts; i++)
		((char *)p)[i] = 0;
	return (p);
}
