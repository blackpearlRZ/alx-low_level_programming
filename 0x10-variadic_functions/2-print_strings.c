#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * followed by a new line
 * @separator: string to be printed
 * @n: string count
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		printf("%s%s", str == NULL ? "(nil)" : str,
				(i < n - 1 && separator != NULL) ? separator : "");
	}
	va_end(args);
	printf("\n");
}
