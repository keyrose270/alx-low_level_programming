#include "main.h"
/**
 * _strcmp - checks if 2 strings are of equal value
 * @s1: destination string.
 * @s2: the string to compare.
 * Return: Sucess compare.
 */
int _strcmp(char *s1, char *s2)
{
int a;
a = 0;
while (s1[a] != '\0' && s2[a] != '\0')
{
if (s1[a] != s2[a])
return (s1[a] - s2[a]);
a++;
}
return (s1[a] - s2[a]);
}
