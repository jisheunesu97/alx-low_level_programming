#include "main.h"
/**
 *print_rev -Function that prints a string, in reverse
 *followed by a new line
 *@s: string
 */

void print_rev(char *s)
{
int ln = 0;
int m;

while (*s != '\0')
{
ln++;
s++;
}
s--;
for (m = ln; m > 0; m--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
