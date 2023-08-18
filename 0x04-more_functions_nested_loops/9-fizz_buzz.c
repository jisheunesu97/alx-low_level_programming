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
int n;

for (n = 1; n <= 100; n++)
{
  if ((n % 3 == 0) && (n % 5) == 0)
printf("FizzBuzzz");

else if ((n % 3) == 0)
printf("Fizz");

else if ((n % 5) == 0)
printf("Buzz");

else
printf("%d", n);

if (n == 100)
continue;
printf(" ");
}
printf("\n");

return (0);
}
