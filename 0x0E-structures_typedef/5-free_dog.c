#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free memory of dog struct
 * @d: dog structure
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
