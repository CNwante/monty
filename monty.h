#ifndef __MONTY_H__
#define __MONTY_H__

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
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

/**
 * struct argument_s - Store variables.
 * @stream: Connects to the stream from a file.
 * @text_line: String read from the stream.
 * @line_number: Tracks current line number.
 * @tokens: Stores tokens from text_line.
 * @instruction: A valid instruction from text_line.
 * @num_tokens: Number of tokens created from text_line.
 * @head: Top of the stack (doubly linked lists of struct stack_s).
 * @stack_length: Tracks the number of nodes in the stack.
 * @stack: Used to determine whether to use stack/queue data structure.
 *
 * Description: Variables for storing functions
 */
typedef struct argument_s
{
	FILE *stream;
	char *text_line;
	unsigned int line_number;
	char **tokens;
	char num_tokens;
	instruction_t *instruction;
	stack_t *head;
	int stack_length;
	int stack;
} argument_t;

extern argument_t *args;

/*ERRORS*/
void validate_args(int argc);
void malloc_failed(void);
void fopen_failed(char *file_name);
void invalid_opcode(void);

void init_args(void);
void file_stream(char *file_name);
void tokenize(void);
void close_strem(void);
void get_opcode(void);
void exec_opcode(void);
void free_tokens_mem(void);

int is_comment(void);
int is_num(char *str);
void pop_stack(void);
void free_args_mem(void);
void free_head(void);
void free_stack(stack_t *head);
void free_all_mem(void);

FILE *fdopen(int fd, const char *mode);

/*Opcodes protos*/
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
void rotl(stack_t **stack, unsigned int line_number);
void rotr(stack_t **stack, unsigned int line_number);
void stack(stack_t **stack, unsigned int line_number);
void queue(stack_t **stack, unsigned int line_number);

#endif /*__MONTY_H__*/
