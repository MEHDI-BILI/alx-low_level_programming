#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: square number
 * Return: root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate square root
 * @i: root
 * @n: square number
 * Return: root or -1
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (n > 0)
		return (-1);
	if (sqrt == 1)
		return (1);
	return (_sqrt(n, i + 1));
}
