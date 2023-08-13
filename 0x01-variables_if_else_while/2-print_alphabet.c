#include <stdio.h>
/**
*main - Entry point
*Return: 0 (Success)
*/

int main(void)
{
	/* Declare a variable*/
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
	  /* print the value of the variable*/
		putchar(alphabet);

	/* increment the variable ('a becomes b')*/
		alphabet++;
	}

	/* print a new line*/
	putchar('\n');
	return (0);
}
