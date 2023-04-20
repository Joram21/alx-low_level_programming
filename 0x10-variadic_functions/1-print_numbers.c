#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number ints passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	if (n > 0)
	{
		va_start(arguments, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(arguments, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(arguments);
	}
	printf("\n");
}
