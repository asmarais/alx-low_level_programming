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
	dog_t *d;
	char *cpname, *cpowner;
	int lenname = 0, lenowner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[lenname] != '\0')
		lenname++;
	while (name[lenowner] != '\0')
		lenowner++;
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	cpname = malloc(lenname + 1);
	if (cpname == NULL)
		return (NULL);
	for (i = 0; i < lenname; i++)
		cpname[i] = name[i];
	cpname[i] = '\0';
	cpowner = malloc(lenowner + 1);
	if (cpowner == NULL)
		return (NULL);
	for (i = 0; i < lenowner; i++)
		cpowner[i] = owner[i];
	cpowner[i] = '\0';
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
