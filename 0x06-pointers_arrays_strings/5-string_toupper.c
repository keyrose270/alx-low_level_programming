#include "holberton.h"

/**
 * string_toupper - converts string lowercase letters to uppercase.
 * @s: string to process.
 * Return: Success tasks 5.
 */
char *string_toupper(char *s)
{
int A;
A = 0;
while (s[A] != '\0')
{
if (s[A] >= 'a' && s[A] <= 'z')
s[A] -= 32;
A++;
}
s[A] = '\0';
return (s);
}
