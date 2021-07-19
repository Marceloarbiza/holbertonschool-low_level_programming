#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data dog
 * @name: first name
 * @age: age
 * @owner: owner
 *
 * Description: long desc
 */
struct dog
{
	dog_t *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
