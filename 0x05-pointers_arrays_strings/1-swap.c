#include "main.h"
/**
 *swap_int - program that swaps two integers
 *@a: int to swap
 *@b: in to swap
 */

void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;
}
