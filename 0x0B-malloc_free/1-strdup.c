#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: string to duplicate
 * Return: a pointer, or NULL if null or failed
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;

	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	return (dup);
}
