#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to concatenate
 * Return: NULL if fail, else newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int a, b, len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
		;
	for (len_s2 = 0; s1[len_s2] != '\0'; len_s2++)
		;

	s = malloc(len_s1 + n + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (a = 0; s1[a] != '\0'; a++)
		s[a] = s1[a];
	for (b = 0; b < n; b++)
	{
		s[a] = s2[b];
		a++;
	}
	s[a] = '\0';
	return (s);
}
