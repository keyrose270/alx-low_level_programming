#include "main.h"
/**
 * print_square - print a square to a given size.
 * @size: size square
 */
void print_square(int size)
{
int vertical, horizontal;
if (size <= 0)
{
_putchar('\n');
return;
}
for (vertical = size ; vertical > 0 ; vertical--)
{
for (horizontal = size ; horizontal > 0 ; horizontal--)
{
_putchar('#');
}
_putchar('\n');
}
}
