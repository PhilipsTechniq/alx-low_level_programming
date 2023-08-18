#include "variadic_functions.h"
/**
 * print_strings - print strings on a new line
 * @seperator: string to be printed between string
 * @n: number of string
 * @...: exact string printed
 *
 * Description: This function prints a variable number of strings, separated by
 * the provided separator string. If a string is NULL, it prints "(nil)".
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	size_t i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
