#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Gets string length.
 * @s: String parameter
 * Return: Returns string length.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len++])
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy - Copies string fro src to dest.
 * @dest: String destination parameter.
 * @src: String source parameter.
 *
 * Return: Returns dest string.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * new_dog - Prints name, age and owner of
 * new datatype dog_t dog.
 * @name: Name of new dog.
 * @age: Age of new dog.
 * @owner: Owner of new dog.
 * Return: new dog d
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int namelen = 0, ownerlen = 0;

	if (name != NULL && owner != NULL)
	{
		namelen = _strlen(name) + 1;
		ownerlen = _strlen(owner) + 1;
		d = malloc(sizeof(dog_t));

		if (d == NULL)
			return (NULL);

		d->name = malloc(sizeof(char) * namelen);

		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}

		d->owner = malloc(sizeof(char) * ownerlen);
		if (d->owner == NULL)
		{
			free(d->name);
			free()d;
			return (NULL);
		}

		d->name = _strcpy(d->name, name);
		d->age = age;
		d->owner = _strcpy(d->owner, owner);
	}

	return (d);
}
