#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer of the node
 * @n: string to be duplicated
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head)
	{
		new->next = *head;
		new->prev = (*head)->prev;
		(*head)->prev = new;
		*head = new;
		return (*head);
	}
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
