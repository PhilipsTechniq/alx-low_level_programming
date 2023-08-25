#include "lists.h"
/**
 * list_len - return number of elements in a linked list_t list
 * @h: head of the linked list
 * Return: number of the elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
