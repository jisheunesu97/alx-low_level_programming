#include "main.h"
/**
 *_puts - Function to print a string
 *Followed by new line to stdout
 *@str: string
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
