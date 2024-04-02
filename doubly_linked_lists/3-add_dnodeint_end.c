#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: pointer
 * @n: a number
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
		new->prev = NULL;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		new->prev = temp;
	}
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
		temp->next = new;
	return (new);
}
