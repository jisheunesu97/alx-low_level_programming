#include "main.h"
#include <string.h>
/**
 *_strlen - this function returns the length of a string
 *@s: the string
 *Return: 0
 */

int _strlen(char *s)
{
int ln = 0;
while (*s != '\0')
{
ln++;
s++;
}
return (ln);
}
