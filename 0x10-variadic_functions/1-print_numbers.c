#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string separator
 * @n: number of parameters
 * @...: int to print
 * Return: number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a = n;
	va_list p;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (a--)
		printf("%d%s", va_arg(p, int),
				a ? (separator ? separator : "") : "\n");
	va_end(p);
}
