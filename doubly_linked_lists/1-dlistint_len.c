#include "lists.h"
/**
 * dlistint_len - adds all the elements of a list to get the length
 * @h: pointer of the list
 * Return: number of elements of the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++, h = h->next)
		;
	return (i);
}
