#include "head.h"

/**
 * _pop - Removes the top element of the stack
 *
 * @head: head of the linked list
 * @lnum: line number
 * Return: no return
 */
void _pop(stack_t **head, unsigned int lnum)
{
	stack_t *pointer;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: cannot pop an empty stack\n", lnum);
		free_gv();
		exit(EXIT_FAILURE);
	}

	pointer = *head;
	*head = (*head)->prev;
	free(pointer);
}
