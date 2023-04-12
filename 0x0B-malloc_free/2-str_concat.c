#include "main.h"

/**
 * _strlen - find lenght of a string
 * @s: string in question
 * Return: size
 */

int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *str_concat - thins fonction concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 or c
 */

char *str_concat(char *s1, char *s2)
{
	int size1, size2, a;
	char *c;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	c = malloc((size1 + size2) * sizeof(char) + 1);

	if (c == 0)
		return (0);

	for (a = 0; a <= size1 + size2; a++)
	{
		if (a < size1)
			c[a] = s1[a];
		else
			c[a] = s2[a - size1];
	}
	c[a] = '\0';
	return (c);
}
