#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Desc: Define a new data type struct dog.
 */


/**
 * struct dog -  A new data type describing a dog.
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: Define a new data type struct dog with the following
 *              elements:
 *              name, type = char *
 *              age, type = float
 *              owner, type = char *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
