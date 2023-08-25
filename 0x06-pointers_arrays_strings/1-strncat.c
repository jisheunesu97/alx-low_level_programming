#include "main.h"
/**
 *_strncat - function that concatenates two strings
 *@dest: pointer to destination string
 *@src: pointer to source string
 *@n: number of bytes from src
 *Return: (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
int len_of_string, x;

len_of_string = 0;
while (dest[len_of_string] != '\0')
{
len_of_string++;
}
for (x = 0; x < n && src[x] != '\0'; x++, len_of_string++)
{
dest[len_of_string] = src[x];
}
dest[len_of_string] = '\0';

return (dest);
}
