#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* sum_them_all - function returns the sum of all its parameters
* @n: is number of parameters passed into the function
*
* Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
va_list _args;
unsigned int a;

va_start(_args, n);
for (a = 0; a < n; a += 1)
{
sum += va_arg(_args, int);
}
va_end(_args);

return (sum);
}
