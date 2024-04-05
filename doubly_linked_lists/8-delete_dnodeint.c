#include "lists.h"
/**
 *delete_dnodeint_at_index - deetes node at the index of the list
 *@head: start of the list
 *@index: index to be deleted
 *Return: 1 if successful or -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (; index != 1; --index, temp = temp->next)
	{
		if (temp == NULL)
			return (-1);
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
