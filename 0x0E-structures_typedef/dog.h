#ifndef DOG_H
#define DOG_H
/**
 *struct dog - the structure dog with names age and owner
 * @name: the name
 * @age: age
 * @owner: who owns
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
