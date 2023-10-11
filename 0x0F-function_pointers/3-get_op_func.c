#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func -This function will select the correct function
 * @s: This is the operator
 * Return: This is the pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"*", op_mul},
		{"/", op_div},
		{"+", op_add},
		{"-", op_sub},
		{"%", op_mod},
		{NULL, NULL},
	};

	int k = 0;

	while (ops[k].op != NULL && *(ops[k].op) != *s)
	{
		k++;
	}
	return (ops[k].f);
}
