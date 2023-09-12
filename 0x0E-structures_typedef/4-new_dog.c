#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen- get the length of the str
 * @str: the string
 * Return: the length
*/

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * strCopyDyn- copy string dynamically
 * @src: the string
 * @dest: the destination
 * Return: the string or NULL
*/

char *strCopyDyn(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog- creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: Pointer dog do or NULL
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->name = strCopyDyn(name, dog->name);
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->owner = strCopyDyn(owner, dog->owner);
	dog->age = age;

	return (dog);
}
