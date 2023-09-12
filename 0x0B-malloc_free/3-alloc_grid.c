#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - function returns pointer to a 2 dimesnsional
*array of int
*@width: is input
*@height: is input
*
*Return: pointeer to dimensional array
*/

int **alloc_grid(int width, int height)
{
int **ptrr;
int r, c;

if (width <= 0 || height <= 0)
return (NULL);

ptrr = malloc(sizeof(int *) * height);

if (ptrr == NULL)
return (NULL);

for (r = 0; r < height; r++)
{
ptrr[r] = malloc(sizeof(int) * width);

if (ptrr[r] == NULL)
{
for (; r >= 0; r--)
free(ptrr[r]);

free(ptrr);
return (NULL);
}
}

for (r = 0; r < height; r++)
{
for (c = 0; c < width; c++)
ptrr[r][c] = 0;
}

return (ptrr);
}
