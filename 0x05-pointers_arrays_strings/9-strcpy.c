#include "main.h"
/**
 * _strcpy - fuction copies the string pointed
 * @dest: pointer to copy the string to.
 * @src: the string to copy to the destination.
 * Return: Success tasks 9.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*src != '\0')
{
dest[i] = *src;
i++;
src++;
}
return (dest);
}
