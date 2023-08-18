#include "variadic_functions.h"
/**
 * print_all - print anything available
 * @format: argumennts pass to function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *frr = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", frr, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", frr, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", frr, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", frr, str);
					break;
				default:
					i++;
					continue;
			}
			frr = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
