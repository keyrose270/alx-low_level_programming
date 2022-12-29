#include "main.h"
/**
 * _puts - writes a string to stdout up to but not including the null character.
 * @str: the value stdout.
 */
void _puts(char *str)
{
while (*str > 0)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
