/* Solution for Exercise 4b from chapter 19 from */
/* C programming, a modern approach by K N King */

// This is a stack interface for a linked list based stack module

#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

#define STACK_SIZE 100

typedef struct
{
	struct node *top;
} Stack;

/*
make_empty:
makes the given stack empty.
*/
void make_empty(Stack *s);

/*
is_empty:
returns true if the given stack is empty.
Returns false otherwise.
*/
bool is_empty(const Stack *s);

/*
is_full:
returns true if the given stack is full. Returns
false otherwise.
*/
bool is_full(const Stack *s);

/*
push:
tries to  push  an integer  into the given stack.
If the push fails, terminates the program, returning
an error code.
*/
void push(Stack *s, int i);

/*
pop:
tries to pop an integer from the given stack. If
the  pop  fails, terminates  the  program  with  an
error code.
*/
int pop(Stack *s);

#endif
