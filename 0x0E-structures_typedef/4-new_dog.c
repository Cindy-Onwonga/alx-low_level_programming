#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - return string length
 * @s: the string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * *_strcpy - copy pointed string
 * @dest: pointer to buffer
 * @src: string to copy
 *
 * Return: final pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		dest[i] = '\0';

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - create new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog or NULL
 */
dog_t *new_dog(char *name, float *age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
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
