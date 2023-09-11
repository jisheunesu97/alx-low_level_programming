#include "main.h"
/**
**_strchr - this function locates a character in string s.
*@s: string to be checked.
*@c: character to be located.
*Return: pointer to first occurrence of c.
*NULL - If character c is not found.
*/

char *_strchr(char *s, char c)
{
int loc;

for (loc = 0; s[loc] >= '\0'; loc++)
{
if (s[loc] == c)
return (s + loc);
}

return ('\0');
}
