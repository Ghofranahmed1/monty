#include "main.h"
/**
 * 
 *
 *
 *
 */

void push(stack_t *head, int data)
{
	int data;
	stack_t *pointer;

	pointer = malloc(sizeof(stack_t));
	if (pointer == NULL)
	{
		printf("stack overflow");
		exit(EXIT_FAILURE);
	}
	else
	{
		if(head == NULL)
		{
			pointer->n = data;
			pointer->next = NULL;
			head = pointer;
		}
		else
		{
			pointer->n = data;
			pointer->next = head;
			head = pointer;
		}
	}
}
		


