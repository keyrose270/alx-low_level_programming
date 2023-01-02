#include "main.h"
/**
 * _strspn - Entry point
 * @s: character to print
 * @accept: character
 * Return: Always 0 (Success) tasks 3
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int a, b, v, alpha;
v = 0;
for (a = 0; s[a] != '\0'; a++)
{
alpha = 0;
for (b = 0; accept[b] != '\0'; b++)
{
if (accept[b] == s[a])
{
v++;
alpha = 1;
}
}
if (alpha == 0)
return (v);
}
return (v);
}
