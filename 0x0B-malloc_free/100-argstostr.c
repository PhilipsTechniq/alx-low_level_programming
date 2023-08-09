#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Concatenate all argument of the program
 * @ac: input arguments
 * @av: pointer array
 * Return: void
 */
char *argstostr(int ac, char **av)
{
	int i, j, tlen = 0, pos = 0;
	char *cnt;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			tlen++;
			j++;
		}
		tlen++;
	}
	cnt = (char *)malloc(sizeof(char) * (tlen + 1));
	if (cnt == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			cnt[pos] = av[i][j];
			pos++;
			j++;
		}
		cnt[pos] = '\n';
		pos++;
	}
	cnt[pos] = '\0';
	return (cnt);
}
