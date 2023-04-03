#include "main.h"

/**
 * _memcpy - copies n butes from memory area src to memory area dest
 * @dest: memory area where the n bytes are moved to
 * @src: initial memory area
 * @n: copied bytes
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int V = n;

	if (V > 0)
	{
		int i;

		for (i = 0; i < V; i++)
			dest[i] = src[i];
	}
	return (dest);
}
