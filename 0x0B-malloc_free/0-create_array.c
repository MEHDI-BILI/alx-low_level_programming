#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of array
 * @c: character
 * Return: 0 or pointer to initialized array
 */

char *create_array(unsigned int size, char c)
{
	char *i = malloc(size);

	if (size == 0 || i == 0)
		return (0);
	while (size--)
		i[size] = c;
	return (i);
}
