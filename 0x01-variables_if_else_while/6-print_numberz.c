#include <stdio.h>
/**
*main - Entry point
*Description - Print all single digit numbers of base 10 from 0
*The whole code is contained in the main function
*Return: 0
*/

int main(void)
{
/*variable definition*/
int a;
/*for loop execution*/
for (a = '0'; a <= '9'; a++)
{
/*display single digit numbers*/
putchar(a);
}

putchar('\n');
return (0);
}
