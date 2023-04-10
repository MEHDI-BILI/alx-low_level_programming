#include "main.h"

/**
 * _isupper - letter caps or not
 * @c: the character to check
 * Return: 1 for caps, else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	return (0);
}

