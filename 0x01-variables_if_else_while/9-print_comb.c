#include <stdio.h>

/**
 * main - print digits base 10 with , and space
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar(' ');
	}
}
