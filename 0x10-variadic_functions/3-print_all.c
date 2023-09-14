#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_all - function that prints anything
*@format: list of types of arguments passed to the function
*
*/

void print_all(const char * const format, ...)
{
int a = 0;
char *string, *separator = "";

va_list _args;

va_start(_args, format);

if (format)
while (format[a])
{
switch (format[a])
{
case 'c':
printf("%s%c", separator, va_arg(_args, int));
break;

case 'i':
printf("%s%d", separator, va_arg(_args, int));
break;

case 'f':
printf("%s%f", separator, va_arg(_args, double));
break;

case 's':
string = va_arg(_args, char *);
if (!string)
string = "(nil)";
printf("%s%s", separator, string);
break;
default:
a++;
continue;
}
separator = ", ";
a++;
}
printf("\n");
}
