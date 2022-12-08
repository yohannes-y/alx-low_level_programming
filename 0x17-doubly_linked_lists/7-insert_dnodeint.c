#include "lists.h"

/**
 *  * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *   *                            list at a given position.
 *    * @h: A pointer to the head of the dlistint_t list.
 *     * @idx: The position to insert the new node.
 *      * @n: The integer for the new node to contain.
 *       *
 *        * Return: If the function fails - NULL.
 *         *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int count = 0;

	if (h == NULL || new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	current = *h;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (current)
	{
		if (current->next == NULL && count == idx - 1)
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}
		else if ((idx - 1) == count)
		{
			new_node->next = current->next;
			new_node->prev = current;
			current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
