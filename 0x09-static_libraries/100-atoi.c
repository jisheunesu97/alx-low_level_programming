#include "main.h"
/**
*_atoi - this function converts a string into and integer
*@s: is the string
*
*
*Return: (integer)
*/

int _atoi(char *s)
{

int a = 1;
int b = 0;
unsigned int x = 0;

while (!(s[b] <= '9' && s[b] >= '0') && s[b] != '\0')
{
if (s[b] == '-')
a *= -1;
b++;
}
while (s[b] <= '9' && (s[b] >= '0' && s[b] != '\0'))
{
x = (x * 10) + (s[b] - '0');
b++;
}
x *= a;
return (x);
}
