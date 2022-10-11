#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new-dog - a function that creates a new dog
 * @name: String type
 * @age: Float type
 * @owner: String type
 *
 * Return: The value pointer to the dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int name_e, owner_e;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return(NULL);

	name_e = _strlen(name);
	new_dog->name = malloc(sizeof(char) * name_e + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	owner_e = _strlen(owner);
	new_dog->owner = malloc(sizeof(char) * owner_e + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;

	return (new_dog);
}

/**
 * _strlen - determinates the lenght of a string
 * @s: pointer to string
 * Return: the length
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	;
	return (a);
}

/**
 * _strcpy - copies a pointed string
 * @dest: pointer to the destine string
 * @src: pointer to the source string
 * Return: the adress of the destiny string
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
