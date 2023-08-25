#include "main.h"
/**
*_strcat - concatenates two strings
*@dest: destination pointer
*@src: source string pointer
*Return: dest
*/

char *_strcat(char *dest, char *src)
{
int len_of_string, x;

len_of_string = 0;
while (dest[len_of_string] != '\0')
{
len_of_string++;
}
for (x = 0; src[x] != '\0'; x++, len_of_string++)
{
dest[len_of_string] = src[x];
}
dest[len_of_string] = '\0';

return (dest);
}
