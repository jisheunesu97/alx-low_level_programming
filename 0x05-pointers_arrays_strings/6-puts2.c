#include "main.h"
#include <string.h>
/**
 *puts2 - Function that prints every other character of a string
 *starting with the first character, followed by a new line.
 *@str: is a string
 */

void puts2(char *str)
{
int a = 0;
int b = strlen(str);

while (*(str + a * 2) > 0 && a * 2 < b)
{
_putchar(*(str + a * 2));
a++;
}
_putchar('\n');
}
