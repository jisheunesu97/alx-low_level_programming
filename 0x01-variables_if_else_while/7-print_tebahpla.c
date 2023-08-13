#include <stdio.h>
/**
*main - Entry point
*Description - Print lowercase alphabet in reverse
*All the code is in main function
*Return: 0
*/

int main(void)
{
  /*variable definition*/
char ch = 'z';
/*while loop execution*/
while (ch >= 'a')
{
  /*display output in reverse*/
putchar(ch);
ch--;
}
/*display new line*/
putchar('\n');
return (0);
}
