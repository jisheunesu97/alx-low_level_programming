#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - print all natural numbers from n to 98
 *followed by new line
 *@n: start from this number
 *last number printed should be 98
 */

void print_to_98(int n)
{
int a, b;

if (n <= 98)
{
for (a = n; a <= 98; a++)
{
if (a != 98)
printf("%d, ", a);
else if (a == 98)
printf("%d\n", a);
}
}
else if (n >= 98)
{
for (b = n; b >= 98; b--)
{
if (b != 98)
printf("%d, ", b);
else if (b == 98)
printf("%d\n", b);
}
}
}
