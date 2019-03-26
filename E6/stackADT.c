/* Solution for Exercise 6a from chapter 19 from */
/* C programming, a modern approach by K N King */

// Added a peek function to the Stack ADT implemented
// with fixed-length array.

#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

#define PUBLIC /**/
#define PRIVATE static
#define STACK_SIZE 100

struct stack_type
{
    int contents[STACK_SIZE];
    int top;
};

PRIVATE void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

PUBLIC Stack create(void)
{
    Stack s = malloc(sizeof(struct stack_type));
    if (s == NULL)
        terminate("Error in create: stack could not be created.");
    s->top = 0;
    return s;
}

PUBLIC void destroy(Stack s)
{
    free(s);
}

PUBLIC void make_empty(Stack s)
{
    s->top = 0;
}

PUBLIC bool is_empty(Stack s)
{
    return s->top == 0;
}

PUBLIC bool is_full(Stack s)
{
    return s->top == STACK_SIZE;
}

PUBLIC void push(Stack s, Item i)
{
    if (is_full(s))
        terminate("Error in push: stack is full.");
    s->contents[s->top++] = i;
}

PUBLIC Item pop(Stack s)
{
    if (is_empty(s))
        terminate("Error in pop: stack is empty.");
    return s->contents[--s->top];
}

PUBLIC Item peek(Stack s)
{
    if (s == NULL)
        terminate("Invalid stack provided to peek (NULL).");
    if (is_empty(s))
        terminate("Error in peek: stack is empty.");
    return s->contents[s->top - 1];
}
