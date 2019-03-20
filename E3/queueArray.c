/* Solution for Exercise 3a from chapter 19 from */
/* C  programming, a modern approach by K N King */

// This is a queue module that uses an array based
// implementation of the queue.

#include "queue.h"

#define PUBLIC /* EMPTY */
#define PRIVATE static

#define QUEUE_MAX_ITEMS 200

Item queue_array[QUEUE_MAX_ITEMS];
PRIVATE int queue_last = 0;  // Stores the first empty slot
PRIVATE int queue_first = 0; // Stores the position of the next item to be removed
PRIVATE int queue_items = 0; // Stores the number of items in the queue

bool queue_insert(Item item)
{
	if (queue_items == QUEUE_MAX_ITEMS)
		return false;
	
	queue_array[queue_last] = item;
	queue_last = (queue_last + 1) % QUEUE_MAX_ITEMS;
	++queue_items;
	return true;
}

bool queue_remove(void)
{
	if (queue_items == 0)
		return false;
	
	queue_first = (queue_first + 1) % QUEUE_MAX_ITEMS;
	--queue_items;
	return true;
}

Item queue_return_first(void)
{
	return queue_array[queue_first];
}

Item queue_return_last(void)
{
	return queue_array[queue_last];
}

bool queue_is_empty(void)
{
	return queue_items == 0;
}
