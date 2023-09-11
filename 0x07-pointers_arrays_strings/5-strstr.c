#include "main.h"
/**
**_strstr - this function locates a substring
*@haystack: string to be checked
*@needle: substring to be located
*Return: Pointer to the beginning of located substring
*        NULL - if substring not found
*/

char *_strstr(char *haystack, char *needle)
{
int a;

if (*needle == 0)
return (haystack);

while (*haystack)
{
a = 0;
if (haystack[a] == needle[a])
{
do {
if (needle[a + 1] == '\0')
return (haystack);

a++;
} while (haystack[a] == needle[a]);
}
haystack++;
}
return ('\0');
}
