#include "main.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13.
 * @s: string to encode
 * Return: Sucess tasks 8
 */
char *rot13(char *s)
{
int h = 0;
while (s[h] != '\0')
{
while (((s[h] >= 'a' && s[h] <= 'm') || (s[h] >= 'A' && s[h] <= 'M')))
{
s[h] += 13;
h++;
}
if ((s[h] >=  'n' && s[h] <= 'z') || (s[h] >=  'N' && s[h] <= 'Z'))
s[h] -= 13;
h++;
}
return (0);
}
