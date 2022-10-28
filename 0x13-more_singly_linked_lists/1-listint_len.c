#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: the head of the list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
