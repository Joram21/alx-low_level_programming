#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: resulting string
 * @src: input string
 * @n: the most number of bytes used from src
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
		continue;
	}
	for (b = 0; src[b] != '\0' && b < n; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
