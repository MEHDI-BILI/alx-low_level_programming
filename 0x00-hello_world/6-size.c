#include <stdio.h>

/**
 * main - print size of various types etc.
 *
 * Return: 0 at the end
 */

int main(void)
{
	fprintf(stderr, "Size of a char: %lu byte(s)\n", sizeof(char));
	fprintf(stderr, "size of an int: %lu byte(s)\n", sizeof(int));
	fprintf(stderr, "size of a long int: %lu byte(s)\n", sizeof(long int));
	fprintf(stderr, "size of a long long int: %lu byte(s)\n", sizeof(long long int));
	fprintf(stderr, "Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
