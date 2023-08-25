#include <string.h>
#include "lists.h"
/**
 * add_note - adds a new node at the beginning of a list_t list
 * @head: of the linked list
 * @str: string to be duplicated
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	if (str == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	return (new_node);
}
