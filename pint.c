#include "head.h"

/**
 * pint - Prints the top value of the stack
 *
 * @head: head of the linked list
 * @data: line number
 * Return: no return
 */
void pint(stack_t *head, unsigned int data)
{
	if (head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", data)
			exit(EXIT_FAILURE);
	}

	printf("%d\n", head->x);
}
