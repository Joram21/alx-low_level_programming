#include "main.h"

/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 * @n: bytes of the memory area pointed to by @s
 * @s: the pointer to the memory
 * @b: constant byte
 * Return: a pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n > 0)
	{
		*(s + 1) = b;
		i++;
	}
	return (s);
}
