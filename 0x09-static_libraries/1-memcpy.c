#include "main.h"
/**
 * _memcpy - function cpy memory content.
 * @dest: memory allocation
 * @src: memory content
 * @n: bytes of the memory
 * Return: Success tasks 1
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
*(dest + a) = *(src + a);
}
return (dest);
}
