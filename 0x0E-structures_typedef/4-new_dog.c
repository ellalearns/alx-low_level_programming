#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - func
 * @name: first param
 * @age: second param
 * @owner: third param
 * Return: new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
int len1;
int len2;

len1 = strlen(name);
len2 = strlen(owner);

newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}

newDog->age = age;

newDog->name = malloc(sizeof(char) * (len1 + 1));
if ((newDog->name) == NULL)
{
free(newDog);
return (NULL);
}
strcpy(newDog->name, name);

newDog->owner = malloc(sizeof(char) * (len2 + 1));
if ((newDog->owner) == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
strcpy(newDog->owner, owner);

return (newDog);
}
