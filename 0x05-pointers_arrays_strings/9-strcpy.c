#include "main.h"
/**
 * char *_strcpy - a function that copies the string pointed
 * @dest: destination
 * @src: standard source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
		dest[x] = src[x];
	dest[x] = '\0';
	return (dest);
}
