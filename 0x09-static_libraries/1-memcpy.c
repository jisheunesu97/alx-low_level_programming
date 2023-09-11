#include "main.h"
/**
*_memcpy - this function copies memory area from src to dest
*@src:  where memory is copied from
*@dest: where memory is copied to
*@n: is the number of bytes
*
*Return: n bytes copied memory
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
int j = n;

for (; i < j; i++)
{
dest[i] = src[i];
n--;
}

return (dest);
}
