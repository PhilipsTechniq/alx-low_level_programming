#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	char x;

	char y;

	/* Print x alphabet */
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	/* Print y alphabet */
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
