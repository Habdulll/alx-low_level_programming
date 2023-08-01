#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: a pointer to the head of the list
 *
 * Return: the number of elements in the lists
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
