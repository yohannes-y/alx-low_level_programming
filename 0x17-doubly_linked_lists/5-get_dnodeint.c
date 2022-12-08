#include "lists.h"

/**
 *  * free_dlistint - Frees a linked dlistint_t list.
 *   * @head: The head of the dlistint_t list.
 *    */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == count)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (NULL);
}
