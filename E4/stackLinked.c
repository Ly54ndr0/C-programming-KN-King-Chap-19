/* Solution for Exercise 4b from chapter 19 from */
/* C programming, a modern approach by K N King */

// This is a linked list based stack module

#include <stdio.h>
#include <stdlib.h>
#include "stackLinked.h"

#define PRIVATE static
#define PUBLIC /* Empty */

struct node
{
    int i;
    struct node *next;
};

PRIVATE void terminate(const char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

PUBLIC void make_empty(Stack *s)
{
    while(!is_empty(s))
        pop(s);
}

PUBLIC bool is_empty(const Stack *s)
{
    return s->top == NULL ? true : false;
}

PUBLIC bool is_full(const Stack *s)
{
    return false;
}

PUBLIC void push(Stack *s, int i)
{
    struct node *new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        terminate("Error: failed to push.");
    
    new_node->next = NULL;
    new_node->i = i;

    if (s->top != NULL)
        s->top->next = new_node;
    s->top = new_node;
}

PUBLIC int pop(Stack *s)
{
    if (is_empty(s))
        terminate("Error: failed to pop.");
    
    int i = s->top->i;
    struct node *old_node = s->top;
    s->top = s->top->next;
    free(old_node);
    return i;
}
