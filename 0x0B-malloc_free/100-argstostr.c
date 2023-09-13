#include "main.h"
#include <stdlib.h>

/**
*argstostr - function entry point
*@ac: integer input
*@av: pointer array
*
*Return: (0) Always
*/

char *argstostr(int ac, char **av)
{
int j, k, m = 0, n = 0;
char *s;

if (ac == 0 || av == NULL)
return (NULL);

for (j = 0; j < ac; j++)
{
for (k = 0; av[j][k]; k++)
n++;
}
n += ac;

s = malloc(sizeof(char) * n + 1);
if (s == NULL)
return (NULL);

for (j = 0; j < ac; j++)
{
for (k = 0; av[j][k]; k++)
{
s[m] = av[j][k];
m++;
}
if (s[m] == '\0')
{
s[m++] = '\n';
}
}
return (s);
}
