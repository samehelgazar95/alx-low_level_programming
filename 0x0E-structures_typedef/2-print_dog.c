#include "dog.h"
#include <stdio.h>

/**
 * print_dog- prints a struct dog
 * @d: dog struct
 * Return: Nothing
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: nill");

		if (d->age)
			printf("Name: %f\n", d->age);
		else
			printf("Name: nill");

		if (d->owner)
			printf("Name: %s\n", d->owner);
		else
			printf("Name: nill");
	}
}
