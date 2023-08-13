#include <stdio.h>
/**
*main - Entry point
*Description -Prints all numbers of base 16 in lowercase
*Only use putchar 3 times
*The whole code is contained in the main function
*Return: 0
*/

int main(void)
{
int x;
char ch;

for (x = 0; x < 10; x++)
{
putchar(x + '0');
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
