#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *@head: start of the list
 *@index: index of the node
 *Return: the node of the nth index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i;

	if (head)
	{
		for (i = 0; tmp != NULL; i++, tmp = tmp->next)
			if (i == index)
				return (tmp);
	}

	return (NULL);
}
