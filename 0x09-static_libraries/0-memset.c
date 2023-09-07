#include "main.h"
/**
*_memset - fill memory with a defined value
*@s: pointer to the memory to be filled
*@n: the size of bytes to be modified
*Return: array
*/

char *_memset(char *s, char t, unsigned int n)
{
int x = 0;

for (; n > 0; x++)
{
s[x] = t;
n--;
}
return (s);
}
