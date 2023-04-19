#include "3-calc.h"

/**
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked by the user
 * @s: the operator passed as argument to the program
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int w;

	w = 0;

	while (ops[w].op)
	{
		if (strcmp(ops[w].op, s) == 0)
			return (ops[w].f);
		w++;
	}

	return (NULL);
}
