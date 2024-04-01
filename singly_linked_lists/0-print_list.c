#include "lists.h"
/**
 *print_list - function that prints all elements of a list
 *@h: pointer to the head of the list
 *Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++, h = h->next)
	{
		if (h->str == NULL)
			printf("[0] (nill)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
	}
	return (i);
}
