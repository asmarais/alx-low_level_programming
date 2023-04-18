#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog -  a function that creates a new dog.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: returns a pointer to newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *cpname, *cpowner;
	int lenname = 0, lenowner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[lenname])
		lenname++;
	while (owner[lenowner])
		lenowner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	cpname = malloc(lenname + 1);
	if (cpname == NULL)
		return (NULL);

	for (i = 0; i < name[i]; i++)
		cpname[i] = name[i];
	cpname[lenname] = '\0';

	cpowner = malloc(lenowner + 1);
	if (cpowner == NULL)
		return (NULL);

	for (i = 0; i < owner[i]; i++)
		cpowner[i] = owner[i];
	cpowner[lenowner] = '\0';

	new_dog->name = cpname;
	new_dog->age = age;
	new_dog->owner = cpowner;
	return (new_dog);
}
