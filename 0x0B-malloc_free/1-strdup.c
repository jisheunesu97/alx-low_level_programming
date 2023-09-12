#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _stdrup - function that returns a pointer to a newly
* allocated space in memory
* @str: is char
*Return: 0 Success
*
*/

char *_strdup(char *str)
{
char *mem;
int j, k = 0;

if (str == NULL)
return (NULL);

j = 0;
while (str[j] != '\0')
j++;

mem = malloc(sizeof(char) * (j + 1));

if (mem == NULL)
return (NULL);

for (k = 0; str[k]; k++)
mem[k] = str[k];

return (mem);
}
