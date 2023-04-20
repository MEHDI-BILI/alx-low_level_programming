#include "variadic_functions.h"

/**
 * print_strings - prints string with separators
 * @separator: separator
 * @n: number of parameters
 * @...: string to be printed
 * Return: printed string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int a = n;
	char *s;
	va_list p;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(p, n);
	while (a--)
		printf("%s%s", (s = va_arg(p, char*)) ? s : "(nil)",
				a ? (separator ? separator : "") : "\n");
	va_end(p);
}
