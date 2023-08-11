#include "main.h"
#include <stdlib.h>
/**
 * _realloc - malloc and free, reallocates a memory block
 * @ptr: Pointer to the memory block
 * @old_size: size of old memories
 * @new_size: implemented size of memory
 * Return: ptr to reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *np;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);

	np = malloc(new_size);
	if (np == NULL)
		return (NULL);
	if (new_size > old_size)
		new_size = old_size;

	for (i = 0; i < new_size; i++)
		*((char *)np + 1) = *((char *)ptr + 1);
	free(ptr);
	return (np);
}
