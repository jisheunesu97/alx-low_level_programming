#include "main.h"
/**
 **string_toupper - change all lowercase letters of a string to uppercase.
 *@a: pointer to string
 *Return: pointer string uppercase
 */

char *string_toupper(char *a)
{
int len_of_string;

len_of_string = 0;

while (a[len_of_string] != '\0')
{
if (a[len_of_string] >= 97 && a[len_of_string] <= 122)
{
a[len_of_string] = a[len_of_string] - 32;
}
len_of_string++;
}

return (a);
}
