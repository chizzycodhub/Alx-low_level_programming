#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcpy(char *dest, char *str);

/**
 * _strlen - determines the length of a given string.
 *
 * @str: the string to find.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
 * _strcpy - copies a string with its null terminator pointed to by str
 *           by dest.
 * @str: A pointer to a given string
 * @dest: A pointer to a buffer that has the copied string.
 *
 * Return: dest.
 */
char *_strcpy(char *dest, char *str)
{
	int index;

	for (index = 0; str[index]; index++)
		dest[index] = str[index];

	dest[index] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog
 *
 * Return: The new dog created.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myNewDog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	myNewDog = malloc(sizeof(dog_t));
	if (myNewDog == NULL)
		return (NULL);

	myNewDog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (myNewDog->name == NULL)
	{
		free(myNewDog);
		return (NULL);
	}
	myNewDog->name = _strcpy(myNewDog->name, name);

	myNewDog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (myNewDog->owner == NULL)
	{
		free(myNewDog->name);
		free(myNewDog);
		return (NULL);
	}
	myNewDog->owner = _strcpy(myNewDog->owner, owner);
	myNewDog->age = age;

	return (myNewDog);
}
