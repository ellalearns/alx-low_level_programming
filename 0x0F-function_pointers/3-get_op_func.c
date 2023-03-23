#include "3-calc.h"
#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * get_op_func - func descp
 * @s: first param
 * Return: int
*/
int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div}, {"%", op_mod}, {NULL, NULL}};

int i;

while (ops[i].op != NULL && *(ops[i].op) != *s)
{
i++;
}

return (ops[i].f);

}
