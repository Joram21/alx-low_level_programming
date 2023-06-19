#include "main.h"

/**
 * _strstr - locates the first occurence of the substring
 * @haystack: string to be searched
 * @needle: the string to be searched for
 * Return: pointer to the located substring or NULL if it's not found
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int s = 0, d = 0;

	while (haystack[s])
	{
		while (needle[d] && (haystack[s] == needle[0]))
		{
			if (haystack[s + d] == needle[d])
				d++;
			else
				break;
		}
		if (needle[d])
		{
			s++;
			d = 0;
		}
		else
			return (haystack + s);
	}
	return (0);
}
