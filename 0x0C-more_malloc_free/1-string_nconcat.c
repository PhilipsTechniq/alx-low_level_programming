#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: first string to append to
 * @s2: second string
 * @n: number of bytes from s2 to concatenate to s1
 * Return: Pointer to newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cnt;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n >= len2)
		n = len2;

	cnt = malloc(sizeof(char) * (len1 + n + 1));
	if (cnt == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		cnt[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		cnt[i] = s2[j];
	cnt[i] = '\0';
	return (cnt);
}
