#include "main.h"

/**
 * print_chessboard - prints chessboard and piece names
 * @a: the chessboard size to be printed
 */

void print_chessboard(char (*a)[8])
{
	int c, d;

	for (c = 0; a[c][7]; c++)
	{
		for (d = 0; d < 8; d++)
			_putchar(a[c][d]);

		_putchar('\n');
		}
}
