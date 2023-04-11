#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creating an array of chars, and initializes it
 * @size: size of an array
 * @c: character an array is initialized
 * Return: a pointer to an array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int  k;
	char *s;

	if (size == 0)
		return (NULL);
	s = (char *)malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (k = 0; k < size; k++)
		s[k] = c;

	return (s);
}
