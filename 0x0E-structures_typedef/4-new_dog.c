#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
* _strlen - gets length of string
* @str: is string to be checked
*
*Return: (length of string)
*/

int _strlen(char *str)
{

int str_len = 0;

while (*str)
str_len++;

return (str_len);
}

/**
*_strcopy - copy string pointed to by src, + null byte
* to memory pointed to by dest
* @dest: destination buffer
* @src: source buffer
*
* Return: (dest)
*/

char *_strcopy(char *dest, char *src)
{
int _index = 0;

for (_index = 0; src[_index]; _index++)
dest[_index] = src[_index];

dest[_index] = '\0';

return (dest);
}

/**
* *new_dog - function creates new dog
* @name: is name of the dog
* @age: is age of dog
* @owner: is the dog owner
*
* Return: (new_dog)
*/

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *ndog;

if (name == NULL || age < 0 || owner == NULL)
return (NULL);

ndog = malloc(sizeof(dog_t));
if (ndog == NULL)
return (NULL);

ndog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (ndog->name == NULL)
{
free(ndog);
return (NULL);
}

ndog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (ndog->owner == NULL)
{
free(ndog->owner);
free(ndog);
return (NULL);
}

ndog->name = _strcopy(ndog->name, name);
ndog->age = age;
ndog->owner = _strcopy(ndog->owner, owner);

return (ndog);
}
