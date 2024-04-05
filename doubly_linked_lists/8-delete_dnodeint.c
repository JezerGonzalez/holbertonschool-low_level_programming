#include "lists.h"
/**
 * dlistint_length - checks the lemgth of total nodes in the list
 *@head: start of node list
 *Return: totla length of nodes in a list
 */
unsigned int dlistint_length(const dlistint_t *head)
{
	unsigned int i;

	for (i = 0; head != NULL; i++, head = head->next)
		;
	return (i);
}
/**
 *delete_dnodeint_at_index - deetes node at the index of the list
 *@head: start of the list
 *@index: index to be deleted
 *Return: 1 if successful or -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int length;

	length = dlistint_length(*head);
	if (index > length)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		(*head) = (*head)->next;
		free(temp);
		return (1);
	}
	for (; index != 1; --index, temp = temp->next)
	{}
	if (temp == NULL)
		return (-1);
	temp->prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
