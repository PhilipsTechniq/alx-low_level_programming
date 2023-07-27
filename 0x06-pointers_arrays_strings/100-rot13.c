#include "main.h"
/**
 * rot13 - Encodes a string using ROT13
 * @s: Pointer to the dtring
 * Return: string
 */
char *rot13(char *s)
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rev[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	char *current = s;

	while (*current != '\0')
	{
		char *letter = alphabet;
		char *rot13_letter = rev;

		while (*letter != '\0')
		{
			if (*current == *letter)
			{
				*current = *rot13_letter;
				break;
			}
			letter++;
			rot13_letter++;
		}
		current++;
	}
	return (s);
}
