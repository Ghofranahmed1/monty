#include "head.h"

/**
 * pop - Removes the top element of the stack
 *
 * @head: head of the linked list
 * @data: line number
 * Return: no return
 */
void pop(stack_s *head, unsigned int data)
{
	stack_t *pointer;

	if (head == NULL)
	{
		fprintf(stderr, "L%u: cannot pop an empty stack\n", data);
		exit(EXIT_FAILURE);
	}

	pointer = head;
	head = head->prev;
	free(pointer);
}
