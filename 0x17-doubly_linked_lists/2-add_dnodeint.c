#include "lists.h"

/**
 *  * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 *   * @head: A pointer to the head of the dlistint_t list.
 *    * @n: The integer for the new node to contain.
 *     *
 *      * Return: If the function fails - NULL.
 *       *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = NULL;

	if (*head == NULL)
	{
		node->next = NULL;
		*head = node;
		return (*head);
	}
	temp = *head;
	node->next = temp;
	temp->prev = node;
	*head = node;
	return (node);
}

