#include <stdio.h>
/**
 *print_array - function prints n elements of an array of integers
 *followed by a new line
 *@n: is the number of array elements
 *@a: input of array
 */

void print_array(int *a, int n)
{
int x_index;

for (x_index = 0; x_index < n; x_index++)
{
printf("%d", a[x_index]);
if (x_index != (n - 1))
{
printf(", ");
}
}
putchar('\n');
}
