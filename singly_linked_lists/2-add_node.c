#include "lists.h"
#include <string.h>
/**
 *_strlen - checks the length of a string
 *@s: pointer pointing at a string
 *Return: length number
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; )
		i++;
	return (i);
}
/**
 *add_node - function that adds a new element to the beginning of a list
 *@head: pointer to the beginning of the list
 *@str: string to be duplicated
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}
