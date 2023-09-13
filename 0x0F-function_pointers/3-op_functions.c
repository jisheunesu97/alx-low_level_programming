#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - function returns sum of two numbers
* @a: integer
* @b: integer
*
* Return: Sum of a and b
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - calculates difference between a and b
* @a: first integer
* @b: second integer
*
* Return: difference between a and b
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - function returns the product of a and b
* @a: integer
* @b: integer
*
* Return: Product of a and b
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - function returns division of two numbers
* @a: integer
* @b: integer
*
*Return: division of a and b
*/

int op_div(int a, int b)
{
return (a / b);
}

/**
* op_mod - fucntion calculates remainder from division of two numbers
* @a: integer
* @b: integer
*
*Return: remainder of the division of a % b
*/

int op_mod(int a, int b)
{
return (a % b);
}
