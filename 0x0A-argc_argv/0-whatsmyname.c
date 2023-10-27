#include <stdio.h>
#include "main.h"

/**
 *main - prints its name, an new line
 *@argc: argument count
 *@argv: array of arguments
 *Return: 0 (success)
*/

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
