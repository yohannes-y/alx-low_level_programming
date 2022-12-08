#include "lists.h"

/**
 *  * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 *   * @head: A pointer to the head of the dlistint_t list.
 *    * @n: The integer for the new node to contain.
 *     *
 *      * Return: If the function fails - NULL.
 *       *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *list = NULL, *end = *head;

	list = malloc(sizeof(dlistint_t));

	if (list == NULL)
	{
		return (NULL);
	}
	list->n = n;
	list->prev = NULL;
	list->next = NULL;

	if (*head == NULL)
	{
		*head = list;
		return (*head);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}
	list->prev = end;
	end->next = list;

	return (list);
}
