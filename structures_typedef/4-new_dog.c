#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *_strlen - recieves string and returns it's size
 *@len: string recieved
 *Return: It's length
 */
int _strlen(char *len)
{
	int i = 0;

	while (len[i] != '\0')
		i++;
	return (i);
}

/**
 *_strdup - duplicates string
 *@dest: empty string
 *@src: string to be duplicated
 * Return: Duplicated string
 */
char *_strdup(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
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
	int length_name, length_owner;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	length_name = _strlen(name);
	new_dog->name = malloc((length_name + 1) * sizeof(char));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strdup(new_dog->name, name);
	new_dog->age = age;
	length_owner = _strlen(owner);
	new_dog->owner = malloc((length_owner + 1) * sizeof(char));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strdup(new_dog->owner, owner);
	return (new_dog);
}
