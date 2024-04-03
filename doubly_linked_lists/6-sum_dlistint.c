#include "lists.h"
/**
 *sum_dlistint - sum of all the data of a list
 *@head: start of the list
 *Return: sum of the data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int i, sum = 0;

	if (head != NULL)
	{
		for (i = 0; tmp != NULL; i++, tmp = tmp->next)
			sum += tmp->n;
		return (sum);
	}
	return (0);
}
