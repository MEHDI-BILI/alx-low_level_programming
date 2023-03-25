#include "main.h"

/**
 * print_most_numbers - prints 1 to 9 without 2 and 4
 * Return: 0 to 9 with exclusions
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0 ; c < 10 ; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
		_putchar(c + '0');
		}
	}
	_putchar('\n');
}
