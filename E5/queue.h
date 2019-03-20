/* Solution for Exercise 5 from chapter 19 from */
/* C programming, a modern approach by K N King */

// THIS IS AN  INTERFACE FOR A QUEUE MODULE IN THE
// FORM OF A HEADER FILE. A DATA TYPE IS USED.

#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

typedef struct 
{
	struct queue_node *queue_first; // Points to the first element in the queue
	struct queue_node *queue_last;  // Points to the last element in the queue
} Queue;


/*
queue_insert:
Inserts an item at the end of the given queue.
*/
bool queue_insert(Queue *q, Item item);

/*
queue_remove:
Removes an  item from  he beginning of the given
queue.
*/
bool queue_remove(Queue *q);

/*
queue_return_first:
returns the first item from the given queue.
*/
Item queue_return_first(const Queue *q);

/*
queue_return_last:
returns the last item from the given queue.
*/
Item queue_return_last(const Queue *q);

/*
queue_is_empty:
Tests   whether  the   given  queue  is  empty,
returning true or false.
*/
bool queue_is_empty(const Queue *q);

#endif
