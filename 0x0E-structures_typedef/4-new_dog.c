#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * _strlen - returns the length of a string.
 * @s: string input.
 * Return: length of an string.
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner, i, j;
	dog_t *the_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	the_dog = malloc(sizeof(dog_t));
	if (the_dog == NULL)
		return (NULL);

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	the_dog->name = malloc(sizeof(char) * len_name + 1);

	if (the_dog->name == NULL)
	{
		free(the_dog);
		return (NULL);
	}
	the_dog->owner = malloc(sizeof(char) * len_owner + 1);

	if (the_dog->owner == NULL)
	{
		free(the_dog->name);
		free(the_dog);
		return (NULL);
	}

	for (i = 0; i < len_name; i++)
	{
		the_dog->name[i] = name[i];
	}
	the_dog->name[i] = '\0'; /* with <= it copies null char */

	for (j = 0; j < len_owner; j++)
	{
		the_dog->owner[j] = owner[j];
	}
	the_dog->owner[j] = '\0';

	the_dog->age = age;
	return (the_dog);
}
