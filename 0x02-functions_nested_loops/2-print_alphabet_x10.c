#include "main.h"
/**
 *print_alphabet_x10 - This function prints lowercase alphabet 10 times
 *Return:void
*/

void print_alphabet_x10(void)
{
int x = '0';
char letter = 'a';

for (x = 0; x < 10; x++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
