#include "main.h"
#include <stddef.h>

/**
*_strchr - entry point of the function
*@s: is an input value
*@c: is an input value
*
*Return: 0 Always
*/

char *_strchr(char *s, char c)
{
int a = 0;

for (; s[a] >= '\0'; a++)
{
if (s[a] == c)
return (&s[a]);
}
return (0);
}
