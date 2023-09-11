#include "main.h"
/**
*factorial - this function returns the factorial
* of a given number
*@n: int input
*Return: -1 if n is lower than zero
*        factorial(n)
**/

int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0)
return (1);
return (n * factorial(n - 1));
}