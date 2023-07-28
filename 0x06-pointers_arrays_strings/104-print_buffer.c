#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Print the content of size bytes of the buffer
 * @b: buffer pointer
 * @size: size of the buffer
 * Return: Void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf(" ");
			if (j % 2 != 0)
				printf(" ");
		}
		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				char c = b[i + j];

				if (c >= 32 && c <= 126)
					printf("%c", c);
				else
					printf(".");
			}
			else
				break;
		}
		printf("\n");
	}
}
