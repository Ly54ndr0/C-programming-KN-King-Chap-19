/* Solution for Exercise 1 from chapter 19 from */
/* C programming, a modern approach by K N King */

// THIS IS AN  INTERFACE FOR A QUEUE MODULE IN THE
// FORM OF A HEADER FILE.

#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef int Item;

/*
queue_insert:
Inserts an item at the end of a pre-set queue.
*/
bool queue_insert(Item item);

/*
queue_remove:
Removes an  item from  he beginning of the pre-set
queue.
*/
bool queue_remove(void);

/*
queue_return_first:
returns the first item from the pre-set queue.
*/
Item queue_return_first(void);

/*
queue_return_last:
returns the last item from the pre-set queue.
*/
Item queue_return_last(void);

/*
queue_is_empty:
Tests   whether  the   pre-set  queue  is  empty,
returning true or false.
*/
bool queue_is_empty(void);

#endif
