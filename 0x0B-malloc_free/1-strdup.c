#include "main.h"
#include <stdlib.h>
/**
  * _strdup - duplicates a string by allocateing space in memory
  * @str: string
  * Return: void
  */

char *_strdup(char *str)
{
	/* initialize */
	unsigned int size_arr = 0;
	char *d;
	unsigned int k;

	/* calculate array size */
	if (str == NULL)
		return (NULL);
	for ( ; str[size_arr] != '\0'; size_arr++)
	;
	/* locate space in memory */
	d = malloc(sizeof(char) * size_arr + 1);

	if (d == NULL)
		return (NULL);

	for (k = 0; k <= size_arr; k++)
	{
		d[k] = *str;
		str++;
	}
	return (d);
}
