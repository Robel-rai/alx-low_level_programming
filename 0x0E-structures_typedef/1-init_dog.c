#include "dog.h"
#include <stdlib.h>
/**
 * struct dog - initializes the main function
 * @d: string type pointer.
 * @name: String type.
 * @age: float type.
 * @owner: string type.
 *
 * Description - The function to intialize the function
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d = NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
