#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

/*
make_empty:
makes the built-in stack empty.
*/
void make_empty(void);

/*
is_empty:
returns true  if  the  built-in  stack  is  empty.
Returns false otherwise.
*/
bool is_empty(void);

/*
is_full:
returns true if the built-in stack is full. Returns
false otherwise.
*/
bool is_full(void);

/*
push:
tries to  push  an integer  into the built-in stack.
If the push fails, terminates the program, returning
an error code.
*/
void push(int i);

/*
pop:
tries to pop an integer from the built-in stack. If
the  pop  fails, terminates  the  program  with  an
error code.
*/
int pop(void);

#endif