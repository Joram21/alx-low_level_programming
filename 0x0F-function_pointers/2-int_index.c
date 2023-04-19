#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - checks if a number is equal to 98
 * @array: the int to check
 * @size: size
 * @cmp: pointer to a function
 * Return: Index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	int result = 0;

	if (array == NULL || cmp == NULL || size <= 0)

		return (-1);

	for (i = 0; i < size; i++)

	{
		result = cmp(*(array + i));

		if (result != 0)
			return (i);
	}
	return (-1);
}
