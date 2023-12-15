#ifndef _HEAD_H_
#define _HEAD_H

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct global - global structure to use in the functions
 * @lifo: is stack or queue
 * @cont: current line
 * @arg: second parameter inside the current line
 * @head: doubly linked list
 * @fd: file descriptor
 * @buffer: input text
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct global
{
	int lifo;
	unsigned int cont;
	char  *arg;
	stack_t *head;
	FILE *fd;
	char *buffer;
} global_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern global_t gv;


/* opcode_commands*/
void _pop(stack_t **head, unsigned int lnum);
void _pint(stack_t **head, unsigned int lnum);
void pull(stack_t *head);
void push(stack_t *head, int data);
void _swap(stack_t **head, unsigned int lnum);

/*get opcode function*/
void (*opcodes(char *popc))(stack_t **stack, unsigned int line_number);

/*functions imported*/
int _strcmp(const char *__s1, const char *__s2);

/* main */
void free_gv(void);

#endif
