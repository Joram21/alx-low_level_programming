#include "main.h"
/**
 * _strcat - Appends the src string to the dest string.
 * @dest: resulting string
 * @src: appended string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char dest_end = dest;

	while (dest_end != '\0')
	{
		dest_end++;
	}
	while (src != '\0')
	{
		dest_end = src;
		dest_end++;
		src++;
	}
	dest_end = '\0';

	return (dest);
}
