#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * passwords for the program 101-crackme
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, j, k;

	j = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		j += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - j) - '0' < 78)
		{
			k = 2772 - j - '0';
			j += k;
			putchar(k + '0');
			break;
		}
	}
	return (0);
}
