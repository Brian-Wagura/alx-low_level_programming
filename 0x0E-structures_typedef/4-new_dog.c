#include "dog.h"
#include <stdlib.h> 
 #include <stdio.h> 
  
 /** 
  * new_dog - creates a new dog 
  * @name: name of the dog 
  * @age: age of the dog 
  * @owner: owner of the dog
  *
  * Return: pointer to the newdog, or NULL
  * if function fails
  */

dog_t *new_dog(char *name, float age, char owner)
{
	dog_t *new_dog;
	int name_len, owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_len = strlen(name);
	owner_len = strlen(owner);

	new_dog->name = malloc(name_len + 1);
	new_dog->owner = malloc(owner_len + 1);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_dog->name, name);
	strcpy(new_dog->owner, owner);

	new_dog->age = age;

	return (new_dog);
}
