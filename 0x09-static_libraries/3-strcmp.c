#include "main.h"

/**
*_strcmp - function compares string values
* @str1: string value
*@str2: string value
*
*
*Return: str1[a] - str2[a]
*/

int _strcmp(char *str1, char *str2)
{
int a = 0;
while (str1[a] != '\0' && str2[a] != '\0')
{
if (str1[a] != str2[a])
{
return (str1[a] - str2[a]);
}
a++;
}
}
