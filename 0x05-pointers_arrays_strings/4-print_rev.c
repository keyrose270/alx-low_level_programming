#include "main.h"
/**
 * print_rev - A function that prints a string.
 * followed by a new line
 * descritpion: key is letter
 * @s: String pointer
 * Return: string
 */
void print_rev(char *s)
{
int key = 0;
int i, n;
for (i = 0; s[i] != '\0'; i++)
{
key++;
}
for (n = (key - 1); n >= 0; n--)
{
_putchar(s[n]);
}
_putchar('\n');
}
