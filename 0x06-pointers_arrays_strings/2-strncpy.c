/**
*_strncpy - program copies a string
*@dest: dest string
*@src: source string
*@n: number of bytes to be copied
*Return: pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int byte_count;

for (byte_count = 0; byte_count < n && src[byte_count] != '\0'; byte_count++)
dest[byte_count] = src[byte_count];

for (; byte_count < n; byte_count++)
dest[byte_count] = '\0';

return (dest);
}
