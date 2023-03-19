#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of two digits
 * Return: Always 0
 */

int main(void)
{
	int d, p;

	for (d = 0; d < 9; p++)
	{
		for (p = d + 1; p <= 9; p++)
		{
			putchar((d % 10) + '0');
			putchar((p % 10) + '0');
			if (d == 8 && p == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
