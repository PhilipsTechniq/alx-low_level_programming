#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenated two strings
 * @s1: input string 1
 * @s2: input string 2
 * Return: Pointer to the newly allocated concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int i, len1 = 0, len2 = 0, len3 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	len3 = len1 + len2 + 1;

	c = malloc(sizeof(char) * len3);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		c[i] = s1[i];
	for (i = 0; i < len2; i++)
		c[len1 + i] = s2[i];
	c[len3 - 1] = '\0';
	return (c);
}
