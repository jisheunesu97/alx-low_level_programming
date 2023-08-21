#include "main.h"
#include <string.h>
/**
 *puts2 - Function that prints every other character of a string
 *starting with the first character, followed by a new line.
 *@str: is a string
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
