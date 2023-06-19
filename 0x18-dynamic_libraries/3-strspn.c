#include "main.h"

/**
 * _strspn - returns the number of bytes in the initial segment
 * @s: the searched string
 * @accept: bytes compared
 * Return: number of bytes matching the number of byte in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0, j;
	int b = 0;

	while (s[a] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[a] == accept[j])
			{
				b++;
				break;
			}
			if (accept[j + 1] == '\0' && s[a] != accept[j])
				return (b);
		}
		a++;
	}
	return (b);
}
