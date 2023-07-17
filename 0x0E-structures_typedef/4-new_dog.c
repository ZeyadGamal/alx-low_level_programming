#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - gets length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copies a string
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = malloc(sizeof(char) * (len1 + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newDog->owner = malloc(sizeof(char) * (len2 + 1));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	_strcpy(newDog->name, name);
	_strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
