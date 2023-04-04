#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: accept
 * Return: s or 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (*s);
		}
		s++;
	}
	return ('\0');
}
