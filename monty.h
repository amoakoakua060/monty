#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>

#define NO_OF_INSTRUCTIONS 7

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
 * struct argument_s - struct to help pass arguments around
 * @tokens: used to store tokens from line
 * @line: used for getting line from file
 * @line_number: for tracking current line number
 * @instruction: a valid instruction from a line
 * @n_tokens: number of tokens created from line
 * @is_comment: tracks whether or not tokens start with #
 * @stream: stream to monty file
 * @stack_length: length of the stack at every point in time
 * @stack_head: head of the stack from where nodes exit
 */
typedef struct argument_s
{
	char **tokens;
	char *line;
	unsigned int line_number;
	instruction_t *instruction;
	int n_tokens;
	int is_comment;
	FILE *stream;
	int stack_length;
	stack_t *stack_head;
} argument_t;

FILE *fdopen(int fd, const char *mode);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);

extern argument_t *arg;

void push(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);

void validate_arguments(int argc);
void open_stream_failed(char *fileName);
void malloc_failed(void);
void free_all_args(void);
void free_arg(void);
void free_tokens(void);
void free_stack(stack_t *head);
void delete_stack_node(void);
void close_stream(void);
void open_stream(char *fileName);
void get_instruction(void);
void invalid_instruction(void);
void run_instruction(void);
void free_stack_head(void);
void tokenize(void);
void init_arg(void);

int is_comment(void);
int is_not_number(char *str);

#endif /* MONTY_H */
