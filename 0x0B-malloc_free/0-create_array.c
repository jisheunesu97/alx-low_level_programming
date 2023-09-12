#include "main.h"
#include <stdlib.h>

/**
* create_array - function creates an array
*of size size and assign specific char
*@size: size of the array
*@c: char to be assigned
*Return: a pointer to array or NULL if size = 0
*/

char *create_array(unsigned int size, char c)
{
char *s;
unsigned int a;

s = malloc(sizeof(char) * size);
if (size == 0 || s == NULL)
return (NULL);

for (a = 0; a < size; a++)
s[a] = c;
return (s);
}
