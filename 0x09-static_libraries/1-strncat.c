#include "main.h"
/**
 * _strncat - concatenates two strings in more line
 * @dest: destination string
 * @src: source string
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *concent = dest;

	while (*concent != '\0')
	{
		concent++;
	}
	while (*src != '\0' && n > 0)
	{
		*concent = *src;
		concent++;
		src++;
		n--;
	}
	*concent = '\0';
	return (dest);
}
