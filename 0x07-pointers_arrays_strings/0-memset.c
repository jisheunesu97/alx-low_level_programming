#include "main.h"
#include <string.h>
/**
*_memset - function fills the memory with constant byte.
*@s: memory area to be filled
*@b: constant byte
*@n: bytes of the memory area pointed by s
*Return: Pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;

for (a = 0; a < n; a = a + 1)
{
s[a] = b;
}

return (s);
}
