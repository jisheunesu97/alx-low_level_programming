#include "main.h"

/**
* _strlen - function returns length of string
*@s: is a string
*Return: len of string
*/

int _strlen(char *s)
{
int long_len = 0;

while (*s != '\0')
{
long_len++;
s++;
}

return (long_len);
}
