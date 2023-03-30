#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: resulting string
 * @src: input string
 * @n: the most number of bytes used from src
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	/**
	 * Find the end of the dest string
	 */
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	/**
	 * Append the src string to dest, up to n characters
	 */

	int i = 0;
	{
		while (i < n && *src != '\0')
		{
		*dest_end = *src;
		dest_end++;
		src++;
		i++;
		}
	}

	/*
	 * Add a terminating null byte
	 */
	*dest_end = '\0';

	return (dest);
}
