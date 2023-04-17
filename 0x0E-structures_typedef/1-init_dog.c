#include "dog.h"
/**
 * init_dog - function to initialize struct
 * @d: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initializ
 * @owner: owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
