#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - function prints numbers given as arguments
* followed by a new line
* @separator: string to be printed between numbers
* @n: number of integers passed to the function
*
* Return:
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int a;
va_list _arg;

va_start(_arg, n);

for (a = 0; a < n; a++)
{
if (!separator)
printf("%d", va_arg(_arg, int));

else if (separator && a == 0)
printf("%d", va_arg(_arg, int));

else
printf("%s%d", separator, va_arg(_arg, int));
}
va_end(_arg);
printf("\n");
}
