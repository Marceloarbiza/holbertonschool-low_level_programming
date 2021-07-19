#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - free struct
 * @d: dog_T
 *
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
	}	
	free(d);

}
