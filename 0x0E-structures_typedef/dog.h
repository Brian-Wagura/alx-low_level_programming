#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - entry point
 *
 * @name: first parameter
 * @age: second parameter
 * @owner: third parameter
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
