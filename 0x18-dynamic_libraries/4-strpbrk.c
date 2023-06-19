#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string
 * @s: the string searched
 * @accept: required matches
 * Return: a pointer to the byte or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, c;

	while (s[a] != '\0')
	{
		for (c = 0; accept[c] != '\0'; c++)
		{
			if (s[a] == accept[c])
			{
				s = &s[a];
				return (s);
			}
		}
		a++;
	}
	return ('\0');
}
