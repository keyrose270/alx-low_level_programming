#include <stdio.h>
#include "main.h"
/**
 * _strchr - Entry point
 * @s: string to check
 * @c: character to found
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
int a;
for (a = 0; s[a] >= '\0'; a++)
{
if (s[a] == c)
return (s + a);
}
return (0);
}
