#include <stdio.h>
/**
 *main - finds and prints the largest prime factor of the 612852475143,
 *followed by a new line
 *Return: 0 ALways
 */

int main(void)
{
long prime = 612852475143, x;

while (x < (prime / 2))
{
if ((prime % 2) == 0)
{
prime /= 2;
continue;
}

for (x = 3; x < (prime / 2); x += 2)
{
if ((prime % x) == 0)
prime /= x;
}
}
printf("%ld\n", prime);
return (0);
}
