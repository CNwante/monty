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
} argument_t;

extern argument_t *args;

/*ERRORS*/
void validate_args(int argc);
void malloc_failed(void);
void fopen_failed(char *file_name);
void invalid_opcode(void);

void init_args();
void file_stream(char *file_name);
void tokenize(void);
void close_strem(void);
void get_opcode(void);
void exec_opcode(void);
void free_tokens_mem(void);

int is_num(char *str);

/*Opcodes protos*/
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);

#endif /*__MONTY_H__*/
