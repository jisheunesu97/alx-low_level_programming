#include "main.h"
/**
 *_isalpha - checks for alphabet character
 *@c: is the character to be checked
 * Return: 1 letter, lowercase or uppercase / 0 if otherwise
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
