#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Contains dog structure.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Containes name of the owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
