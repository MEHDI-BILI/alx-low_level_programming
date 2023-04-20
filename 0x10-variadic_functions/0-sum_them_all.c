#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * @...: parameters to sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, a = n;
	va_list p;

	if (!n)
		return (0);
	va_start(p, n);
	while (a--)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
