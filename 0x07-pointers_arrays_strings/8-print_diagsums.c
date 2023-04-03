#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of diagonals of a square matrix integers
 * @a: matrix integer
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int d, x;
	int f1 = 0;
	int f2 = 0;

	for (d = 0; d < size; d++)
	{
		x = (d * size) + d;
		f1 += a[x];
	}
	for (d = 1; d <= size; d++)
	{
		x = (d * size) - d;
		f2 += a[x];
	}
	printf("%d, %d\n", f1, f2);
}
