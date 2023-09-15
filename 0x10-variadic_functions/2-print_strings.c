#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_strings -  function prints strings, followed by a new line
*@separator: string to be printed between the string
*@n: number of strings passed to the argument
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int a;
char *string;

va_list _args;

va_start(_args, n);

for (a = 0; a < n; a++)
{
string = va_arg(_args, char *);
if (!string)
string = "nil";

if (!separator)
printf("%s", string);

else if (separator && a == 0)
printf("%s", string);

else
printf("%s%s", separator, string);
}
va_end(_args);
printf("\n");
}
