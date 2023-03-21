#include "main.h"
/**Description: Determines if the input number is greater, equal, or less than zero
 *
 * @c: the input number as an integer
 *
 * Return: 1 if greater than zero, 0 if its zero, -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
