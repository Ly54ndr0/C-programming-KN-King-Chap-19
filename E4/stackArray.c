/* Solution for Exercise 4a from chapter 19 from */
/* C programming, a modern approach by K N King */

// This is an array based stack module

#include <stdio.h>
#include <stdlib.h>
#include "stackArray.h"

#define PRIVATE static
#define PUBLIC /* Empty */

PRIVATE void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

PUBLIC void make_empty(Stack *s)
{
	s->top = 0;
}

PUBLIC bool is_empty(const Stack *s)
{
	return s->top == 0 ? true : false;
}

PUBLIC bool is_full(const Stack *s)
{
	return s->top == STACK_SIZE ? true : false;
}

PUBLIC void push(Stack *s, int i)
{
	if (is_full(s))
		terminate("Error: stack is full.");
	
	s->contents[s->top++] = i;
}

PUBLIC int pop(Stack *s)
{
	if (is_empty(s))
		terminate("Error: stack is empty.");

	return s->contents[--(s->top)];
}
