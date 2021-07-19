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
	char *name;
	float age;
	char *owner;
	char *dog_t;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
