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
	unsigned int i;

	for (i = 0; i < idx; i++, temp = temp->next)
	;
	if (idx > i)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	temp = temp->prev;
	if (new == NULL)
		return (NULL);
	if (*h)
	{
		new->n = n;
		new->prev = temp;
		new->next = temp->next;
		temp->next = new;
		new->next->prev = new;
	}
	return (new);
}
