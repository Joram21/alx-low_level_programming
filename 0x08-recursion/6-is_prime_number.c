#include "main.h"

/**
 * check_prime - checks if prime
 * @a: the number to check
 * @b: the divisor
 * Return: 1 if a is prime or 0 when it is not
 */

int check_prime(int a, int b)
{
	if (a % b == 0)
	{
		return (0);
	}
	else if (b / 2 > a)
	{
		return (check_prime(a + 2, b));
	}
	else
	{
		return (1);
	}
}
/**
 * is_prime_number - determines if a number is a prime number
 * @n: the number to check
 * Return: 1 if the number is prime or 0 if its not
 */
int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (check_prime(3, n));
	}
}
