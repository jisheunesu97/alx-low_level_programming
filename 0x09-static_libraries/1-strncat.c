#include "main.h"
/**
*_strncat - this function concatenates two strings
*@dest: this is an input value
*@src: this a an input value
*@s: is an input
*
*
*Return: (dest)
*/

char *_strncat(char *dest, char *src, int s)
{
int a;
int b;

a = 0;
while (dest[a] != '\0')
{
a = a + 1;
}
b = 0;
while (b < s && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
