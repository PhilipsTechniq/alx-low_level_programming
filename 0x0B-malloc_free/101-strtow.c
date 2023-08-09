#include "main.h"
#include <stdlib.h>
/**
 * count_word - Counts the number of words in a string
 * @s: input string
 * Return: number of words
 */
int count_word(char *s)
{
	int x, c, w;

	x = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			x = 0;
		else if (x == 0)
		{
			x = 1;
			w++;
		}
	}

	return (w);
}

/**
 * **strtow - splits a string into words
 * @str: Input string
 * Return: Pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	int i, j, k = 0, len = 0, c = 0, start, end;
	char **word, *cnt;

	while (*(str + len))
		len++;
	j = count_word(str);
	if (j == 0)
		return (NULL);

	word = (char **) malloc(sizeof(char *) * (j + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				cnt = (char *) malloc(sizeof(char) * (c + 1));
				if (cnt == NULL)
					return (NULL);
				while (start < end)
					*cnt++ = str[start++];
				*cnt = '\0';
				word[k] = cnt - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	word[k] = NULL;
	return (word);
}
