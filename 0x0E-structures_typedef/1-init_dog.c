#include "dog.h"
#include <stdio.h>
/**
 * init_dog  - this is the function to make the struct
 * @d: the structure
 * @name: name
 * @age: the int age
 * @owner: who owns
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
