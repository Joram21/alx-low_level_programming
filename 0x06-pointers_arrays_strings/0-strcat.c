#include "main.h"
/**
 * _strcat - Appends the src string to the dest string.
 * @dest: resulting string
 * @src: appended string
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	/*
	 * Find the end of the dest string
	 */
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	/*
	 * Append the src string to dest
	 */
	while (*src != '\0')
	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	/*
	 * Add a terminating null byte
	 */
	*dest_end = '\0';
	return (dest);
}
