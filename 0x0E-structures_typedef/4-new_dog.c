#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - new dog
 * @name: char
 * @age: float
 * @owner: char
 *
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return (newDog);
}
