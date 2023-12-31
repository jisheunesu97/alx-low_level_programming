#include "main.h"
#include <stdio.h>
/**
*print_diagsums - function prints sum of two diagonals
*of a square matrix of integers
*@a: matrix of integers
*@size: size of matrix
*/

void print_diagsums(int *a, int size)
{
int i, add = 0, add1 = 0;

for (i = 0; i < size; i++)
{
add += a[i];
a += size;
}

a -= size;

for (i = 0; i < size; i++)
{
add1 += a[i];
a -= size;
}
printf("%d, %d\n", add, add1);
}
