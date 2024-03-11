#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - function that creates a new dog
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
	{
		free(name);
		free(owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
