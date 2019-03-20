/* Solution for Exercise 3b from chapter 19 from */
/* C  programming, a modern approach by K N King */

// This is a queue module that uses a linked list
// based implementation of the queue.

#include <stdlib.h>
#include "queue.h"

#define PUBLIC /* EMPTY */
#define PRIVATE static

typedef struct queue_node
{
	Item item;
	struct queue_node *next;
} queue_node;

PRIVATE queue_node *queue_first = NULL; // Points to the first element in the queue
PRIVATE queue_node *queue_last = NULL;  // Points to the last element in the queue

bool queue_insert(Item item)
{
	queue_node *new_queue_node = malloc(sizeof(queue_node));
	if (new_queue_node == NULL)
		return false;
	
	new_queue_node->next = NULL;

	if (queue_last != NULL) 
		queue_last->next = new_queue_node;
	queue_last = new_queue_node;
	if (queue_first == NULL) 
		queue_first = queue_last;

	return true;	
}

bool queue_remove(void)
{
	if (queue_first == NULL)
		return false;
	
	if (queue_first == queue_last) // Very important!
		queue_last = NULL;
	queue_node *queue_old_node = queue_first;
	queue_first = queue_first->next;
	free(queue_old_node);
	return true;
}

Item queue_return_first(void)
{
	return queue_first != NULL ? queue_first->item : (Item) 0;
}

Item queue_return_last(void)
{
	return queue_last != NULL ? queue_last->item : (Item) 0;
}

bool queue_is_empty(void)
{
	return queue_first == NULL;
}
