#include "main.h"
/**
**_memcpy - this function copies n bytes from memory area src
*To memory area dest
*@dest: destination memory area
*@src: source memory area
*@n: number bytes copied from memory area src
*Return: (dest)
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int a = 0;

while (a < n)
{
dest[a] = src[a];
a++;
}

return (dest);
}
