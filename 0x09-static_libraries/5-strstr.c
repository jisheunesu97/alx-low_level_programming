#include "main.h"

/**
*_strstr - function entry point
*@haystack: is an input value
*@needle: is an input value
*
*Return: 0 Always
*/

char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *o = haystack;
char *p = needle;

while (*o == *p && *p != '\0')
{
o++;
p++;
}

if (*p == '\0')
return (haystack);
}

return (0);
}
