#include "variadic_functions.h"

/**
 * print_all - print anything passed as parameters
 * @format: list of argument types passed
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (fomrat)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(lsit, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");

	va_end(list);
}
