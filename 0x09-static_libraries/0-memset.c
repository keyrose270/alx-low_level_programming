#include "main.h"
/**
 * _memset - fills memory.
 * @s: allocated memory .
 * @b: char bytes .
 * @n: number of spaces to fill .
 * Return: a pointer to the memory area .
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
*(s + a) = b;
}
return (s);
}
