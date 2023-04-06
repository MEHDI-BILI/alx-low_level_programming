#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - returns 1 if the input integer is a prime number, else 0
 * @n: value
 * Return: check prime
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - reveals if n is prime or not
 * @n: value to check
 * @i: divider
 * Return: 1 if prime, else 0
 */

int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i > 1)
		return (0);
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}


