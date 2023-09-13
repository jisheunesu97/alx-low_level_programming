#include "dog.h"
#include <stdlib.h>

/**
* init_dog - function to initialize variable of type
* struct dog
* @d: is dog to be initialised
* @name: is name of the dog
* @owner: is the owner of the dog
* @age: is age of the dog
*
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
