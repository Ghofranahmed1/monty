#include "head.h"
#include <stdio.h>

/*
 * get_op - find the function that gies with the command
 *@op: opcode
 *@stack: doubly linked list
 *@n: number of line in script file
 *Return: nothing
 */
void get_op(char *op, stack_t **stack, unsigned int n)
{
	instruction_t valid_ops_list[] = {
		{"push",push},
		{"pall", pull},
		{"pint", _pint},
		{"pop", _pop},
		{NULL, NULL}};
	for(i = 0; valis_ops_list[i].opcode != NULL; i++)
	{
		if (strcmp(valid_ops_list[i].opcode, op) == 0)
		{
			valid_ops_list[i].f(stack, n);
			return;
		}
	}
	dprintf(STDOUT_FILENO, "L%u: unknown instruction %s\n", n, op);
	exit(EXIT_FAILURE);
}	
