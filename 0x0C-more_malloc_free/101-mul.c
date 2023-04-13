#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_digit - confirms if there is a non-digit char
 * @s: string
 * Return: 1 if all are numbers, else 0
 */

int is_digit(char *s)
{
	int c;

	c = 0;

	while (s[c])
	{
		if (s[c] < '0' || s[c] > '9')
			return (0);
		c++;
	}
	return (1);
}

/**
 * _strlen - finds length of a string
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int d;

	d = 0;

	while (s[d] != '\0')
	{
		d++;
	}
	return (d);
}

/**
 * errors - checks for issues in the main function
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - function to multiply two unsigned int
 * @argc: amount of argumets in the array
 * @argv: arguments being passed
 * Return: void
 */

int main(int argc, char *argv[])
{
	char *str1, *str2;
	int len1, len2, new_len, c, mod, num1, num2, *mul, d = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	len1 = _strlen(str1);
	len2 = _strlen(str2);
	new_len = len1 + len2 + 1;
	mul = malloc(sizeof(int) * new_len);
	if (!mul)
		return (1);
	for (c = 0; c <= len1 + len2; c++)
		mul[c] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		num1 = str1[len1] - '0';
		mod = 0;
		for (len2 = _strlen(str2) - 1; len2 >= 0; len2--)
		{
			num2 = str2[len2] - '0';
			mod += mul[len1 + len2 + 1] + (num1 * num2);
			mul[len1 + len2 + 1] = mod % 10;
			mod /= 10;
		}
		if (mod > 0)
			mul[len1 + len2 + 1] += mod;
	}
	for (c = 0; c < new_len - 1; c++)
	{
		if (mul[c])
			d = 1;
		if (d)
			_putchar(mul[c] + '0');
	}
	if (!d)
		_putchar('0');
	_putchar('\n');
	free(mul);
	return (0);
}
