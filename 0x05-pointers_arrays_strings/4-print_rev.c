#include "main.h"
/**
 * print_rev - minic
 * @s: the value stdout in reverse.
 */
void print_rev(char *s)
{
int c;
while (*(s + c) != '\0')
{
c++;
}
while (c--)
{
_putchar(*(s + (c)));
}
_putchar('\n');
}
