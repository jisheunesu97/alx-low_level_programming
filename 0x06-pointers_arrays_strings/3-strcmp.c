#include "main.h"
/**
 *_strcmp - function comparing two strings
 *@s1: pointer to string 1
 *@s2: pointer to string 2
 *Return: (result)
 */

int _strcmp(char *s1, char *s2)
{
int count, result;

count = 0;
while (s1[count] == s2[count] && s1[count] != '\0')
{
count++;
}

result = s1[count] - s2[count];
return (result);
}
