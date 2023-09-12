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
	int len;

	while (*str)
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * strCopyDyn- copy string dynamically
 * @str: the string
 * Return: the string or NULL
*/

char *strCopyDyn(char *str)
{
	int i;
	int nameLen = _strlen(str);
	char *temp = malloc(sizeof(char) * nameLen + 1);

	if (temp == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		temp[i] = str[i];

	temp[i] = '\0';

	return (temp);
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

	if (!name || !age || !owner)
	{
		return (NULL);
	}

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = strCopyDyn(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = strCopyDyn(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->age = age;

	return (dog);
}
