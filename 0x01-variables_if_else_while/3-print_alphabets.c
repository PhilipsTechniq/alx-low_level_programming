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

	/* Print x alphabets */
	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	/* Print y alphabets */
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}	
	putchar('\n');
	return (0);
}

