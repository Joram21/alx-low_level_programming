#include "main.h"

/**
 * _strlen_recursion - size
 * @s: pointer to string
 * Return: recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}

/**
 * p1 - palindrome
 * @s: pointer to string
 * @h: position of cursor
 * Return: boolean
 */

int p1(char *s, int h)
{
	if (h < 1)
	{
		return (1);
	}

	if (*s == *(s + h))
	{
		return (p1(s + 1, h - 2));
	}
	return (0);
}

/**
 * is_palindrome - palindrome
 * @s: pointer to string
 * Return: recursion
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (p1(s, len - 1));
}
