#include "head.h"
#include <stdio.h>

/**
 * _swap - swaps the top two elements of the stack
 *
 * @head: head of the linked list
 * @lnum: line number
 * Return: no return
 */
void _swap(stack_t **head, unsigned int lnum)
{
        int b = 0;
        stack_t *aux = NULL;

        aux = *head;

        for (; aux != NULL; aux = aux->next, b++)
                ;

        if (b < 2)
        {
                dprintf(2, "L%u: can't swap, stack too short\n", lnum);
                free_gv();
                exit(EXIT_FAILURE);
        }

        aux = *head;
        *head = (*head)->next;
        aux->next = (*head)->next;
        aux->prev = *head;
        (*head)->next = aux;
        (*head)->prev = NULL;
}
