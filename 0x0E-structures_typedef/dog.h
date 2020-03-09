#ifndef DOG_H
#define DOG_H

/**
 * struct dog - get info about dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: data structure to store info about dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
