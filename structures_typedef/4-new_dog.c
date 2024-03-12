#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *_strdup - duplicates string
 *@dest: empty string
 * Return: Duplicated string
 */
char *_strdup(char *src)
{
	int i = 0;
	int length = 0;
	char *ptr;

	if (src == NULL)
		return (NULL);
	for (length = 0; src[length] != '\0'; length++)
	{}
	ptr = malloc((length + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		ptr[i] = src[i];
	ptr[i] = '\0';
	return (ptr);
}

/**
 *new_dog - function that creates a new dog
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = NULL;

	if(name == NULL || owner == NULL)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	new_dog->owner = _strdup(owner);
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->age = age;
	return (new_dog);
}
