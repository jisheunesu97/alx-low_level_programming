#include "main.h"
/**
*_strspn - this function gets the length of a prefix substring.
*@s: string to be checked.
*@accept: prefix substring to be measured.
*Return: number of bytes in initial segment of s.
*Only bytes from accept.
*/

unsigned int _strspn(char *s, char *accept)
{

unsigned int byt = 0;
int seg;

while (*s)
{
for (seg = 0; accept[seg]; seg++)
{
if (*s == accept[seg])
{
byt++;
break;
}
else if (accept[seg + 1] == '\0')
return (byt);
}
s++;
}
return ('\0');
}
