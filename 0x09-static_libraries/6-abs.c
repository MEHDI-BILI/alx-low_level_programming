#include "main.h"

/**
 * _abs - prints absolute value
 * @a: number to be checked
 * Return: a absolute value
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
