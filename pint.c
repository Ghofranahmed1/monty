#include "head.h"

/**
 * _pint - Prints the top value of the stack
 *
 * @head: head of the linked list
 * @data: line number
 * Return: no return
 */
void _pint(stack_t **head, unsigned int lnum)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", lnum);
		free_gv();
			exit(EXIT_FAILURE);
	}

	printf("%d\n", (*head)->n);
}
