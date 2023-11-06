#include"dog.h"
#include<stdio.h>

/**
 * init_dog - function intialize variable type struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * @d: the dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	d->name = name;
	d->owner = owner;
	d->age = age;
}
