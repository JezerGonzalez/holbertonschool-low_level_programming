#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at any given position
 * @h: start of the list
 * @idx: index to insert the new node
 * @n: number to insert
 * Return: the address of the new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	for (; idx != 1; idx--, temp = temp->next)
	{
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	new->next->prev = new;
	return (new);
}
