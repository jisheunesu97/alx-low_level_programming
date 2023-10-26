#include "main.h"

int actual_prime(int n, int x);

/**
*is_prime_number - checks for prime number
*@n: number to check
*Return: 1 if n is prime number, 0 if false
*/

int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
*actual_prime - check if number is prime number
*@n: number to check
*@x: index
*Return: 1 if prime, 0 if false
*/

int actual_prime(int n, int x)
{
if (x == 1)
return (1);
if (n % x == 0 && x > 0)
return (0);
return (actual_prime(n, x - 1));
}
