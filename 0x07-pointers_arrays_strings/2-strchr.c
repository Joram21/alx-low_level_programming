#include "main.h"

/**
 * _strchr - points to the first occurence  of the character
 * @s: search location of character c
 * @c: the character being searched
 * Return: pointer to c (success) or 'NULL' if character c is not found
 */
char *_strchr(char *s, char c)
{
	int k = 0;

	while (s[k] != '\0' && s[k] != c)
		k++;

	if (s[k] == c)
		return (&s[k]);
	else
		return ('\0');
}
