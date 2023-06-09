#include "main.h"
#include <stdlib.h>

/**
  *len - get length of arr or str
  * @s: str
  * Return: int
  */

int len(char *s)
{
	int len = 0;

	for (; s[len] != '\0'; len++)
	;
	return (len);
}



/**
  * str_concat - concatenates two strings
  * @s1: str
  * @s2: str
  * Return: char type
  */

char *str_concat(char *s1, char *s2)
{
	int size_s1;
	int size_s2;
	char *p;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* get length */
	size_s1 = len(s1);
	size_s2 = len(s2);

	/* locate space in memory && handle allocation failure */
	p =  (char *) malloc((size_s1 + size_s2 + 1));
	if (p == NULL)
		return (NULL);

	/* loop through s1 */
	for (j = 0; j < size_s1; j++, i++)
		p[i] = s1[j];

	/* loop through s2 and copy the null byte */
	for (j = 0 ; j < size_s2; j++, i++)
		p[i] = s2[j];

	p[i] = '\0';
	return (p);
}
