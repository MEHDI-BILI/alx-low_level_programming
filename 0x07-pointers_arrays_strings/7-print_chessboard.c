#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the array ?
 * Return: chessboard
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 0; i++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
