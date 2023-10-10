#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - This function should cpy a str pointed by src
 * @dest: where to cpy to
 * @src: str to cpy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, y;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (y = 0; y < len; y++)
	{
		dest[y] = src[y];
	}
	dest[y] = '\0';

	return (dest);
}

/**
 * _strlen - This fuction should return the str length
 * @s: This is the str
 *
 * Return: length of str
 */

int _strlen(char *s)
{
	int y;

	y = 0;

	while (s[y] != '\0')
	{
		y++;
	}

	return (y);
}

/**
 * new_dog - This function is expected to simply create a new dog.
 * @owner: This is the owner
 * @age: This is th dogs age
 * @name: This is the dogs name
 * Return: Dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
