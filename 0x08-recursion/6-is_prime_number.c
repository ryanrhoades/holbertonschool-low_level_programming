#include "main.h"

int _prime(int n, int c);
/**
 * is_prime_number - Returns if a number is prime
 * @n: the number to be checked
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * check_prime - Check if number is prime
 * @n: the number to be checked
 * @i: the iteration times
 *
 * Return: 1 for prime or 0 composite
 */
int _prime(int n, int c)
{
	if (n <= 1)
		return (0);
	if (n % c == 0 && c > 1)
		return (0);
	if ((n / c) < c)
		return (1);
	return (_prime(n, c + 1));
}
