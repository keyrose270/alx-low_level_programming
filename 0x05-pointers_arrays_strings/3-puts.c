#include "main.h"
/**
 * _puts - writes a string to stdout up.
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
