#include "main.h"
/**
 *print_square - print square, followed by a new line
 *@size: the size of square
 */

void print_square(int size)
{
int a, b;

if (size <= 0)
_putchar('\n');

b = 0;
while (b < size)
{
a = 0;
while (a < size)
{
_putchar('#');
a++;
}
_putchar('\n');
b++;
}
}
