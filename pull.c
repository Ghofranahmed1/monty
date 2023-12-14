#include "main.h"

/*
 *
 *
 *
 *
 */

void pull(stack_s *head)
{
	int i;
	stach_s *pointer = head;

	if (pointer == NULL)
	{
		printf("stack underflow");
		exit();
	}
	else 
	{
		while(pointer != NULL)
		{
			print("%d\n", pointer->n);
			pointer = pointer->next;
		}
		exit()
	}
}
