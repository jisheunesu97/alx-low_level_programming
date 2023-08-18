#include <stdio.h>
/**
 *main - print numbers from 1 to 100
 *Multiples of three will print Fizz
 *multiples of five will print Buzz
 *multiples of both three and five print FizzBuzz
 *Return: 0 Always
 */

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 15 == 0)
printf("FizzBuzz");

else if (i % 3 == 0)
printf("Fizz");

else if (i % 5 == 0)
printf("Buzz");

else
printf("%i", i);

if (i < 100)
printf(" ");
}
printf("\n");
return (0);
}
