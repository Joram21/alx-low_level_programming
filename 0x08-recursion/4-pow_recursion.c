#include "main.h"

/**
 * _pow_recursion - calculates the exponential value
 * @x: base
 * @y: exponent
 * Return: value of x^y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0 || x == 1)
		return (1);

	if (x == 0)
		return (0);

	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
