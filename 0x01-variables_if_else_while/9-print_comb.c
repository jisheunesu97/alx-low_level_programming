#include <stdio.h>
/**
*main - Entry point
*Prints all possible combinations of single-digit numbers
*Numbers are printed in ascending order
*Numbers are separated by commas and space
*Return: 0
*/

int main(void)
{
int x;

for (x = '0'; x <= '9'; x++)
{
putchar(x);
if (x != '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
