#include <stdlib.h>
#include "main.h"

/**
*str_concat - takes the ends of input, then add for size
*@s1: is input one
*@s2: is input two
*Return: concatination of str1 + str2
*/

char *str_concat(char *s1, char *s2)
{
char *conca;
int a, c;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

a = c = 0;
while (s1[a] != '\0')
a++;
while (s2[c] != '\0')
c++;
conca = malloc(sizeof(char) * (a + c + 1));

if (conca == NULL)
return (NULL);

a = c = 0;
while (s1[a] != '\0')
{
conca[a] = s1[a];
a++;
}

while (s2[c] != '\0')
{
conca[a] = s2[c];
a++, c++;
}
conca[a] = '\0';
return (conca);
}
