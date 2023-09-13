#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - function searches for an integer
* @array: array
* @size: number of elements in the array
* @cmp:  a pointer to the function
*
* Return: integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int a;

if (array == NULL || size <= 0 || cmp == NULL)
return (-1);

for (a = 0; a < size; a++)
{
if (cmp(array[a]))
return (a);
}
return (-1);
}
