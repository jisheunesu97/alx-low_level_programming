#include <stdio.h>
/**
 *main - Entry point
 *Return: 0 (Success)
 */
int main(void)
{
	char lowercase;
	char uppercase;

  /*loop for lowercase alphabet*/
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
/*display lowercase alphabet*/
putchar(lowercase);
}
  /*loop for uppercase alphabet*/
for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
{
 /*display uppercase alphabet*/
putchar(uppercase);
}
 /*print new line*/
putchar('\n');
return (0);
}

