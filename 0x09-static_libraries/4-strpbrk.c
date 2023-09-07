#include "main.h"

/**
*_strpbrk - function entry point
*@s: is input value
*@obtain: is an input value
*Return: 0 (Always)
*/

char *_strpbrk(char *s, char *obtain)
{
int a;

while (*s)
{
for (a = 0; obtain[a]; a++)
{
if (*s == obtain[a])
return (s);
}
s++;
}
return ('\0');
}
