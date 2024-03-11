#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initializes dog variables
 *@d: pointer
 *@name: name of dog
 *@age: dog's age
 *@owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
