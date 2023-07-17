#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog
 * @name: dogs's name
 * @age: dog's age
 * @owner: dog's owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
