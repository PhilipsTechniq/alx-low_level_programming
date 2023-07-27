#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: input value
 * @src: value to be input
 * Return: desk
 */
char *_strcat(char *dest, char *src)
{
	char *concent = dest;

	while (*concent != '\0')
	{
		concent++;
	}
	while (*src != '\0')
	{
		*concent = *src;
		concent++;
		src++;
	}
	*concent = '\0';
	return (dest);
}
