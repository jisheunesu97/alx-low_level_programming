#include "main.h"

/**
*_strspn - functio entry point
*@s: is input
*@obtain: is input value
*Return: 0 Always
*/

unsigned int _strspn(char *s, char *obtain)
{
unsigned int a = 0;
int c;

while (*s)
{
for (c = 0; obtain[c]; c++)
{
if (*s == obtain[c])
{
a++;
break;
}
else if (obtain[c + 1] == '\0')
return (a);
}
s++;
}
return (a);
}
