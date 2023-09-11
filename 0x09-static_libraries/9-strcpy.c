#include "main.h"

/**
*_strcpy - function will copy string pointed to
*by pointer src
*@dest: destination copied to
*@src: source copied from
*
*Return: string
*/

char *_strcpy(char *dest, char *src)
{
int n = 0;
int m = 0;

while (*(src + n) != '\0')
{
n++;
}
for (; m < n; m++)
{
dest[m] = src[m];
}
dest[n] = '\0';
return (dest);
}
