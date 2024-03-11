#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *print_dog - printing name, owner, age
 *@d: pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nill)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: 0.000000");
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Name: (nill)\n");
	else
		printf("Owner: %s\n", d->owner);
}
