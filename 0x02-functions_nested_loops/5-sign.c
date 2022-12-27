#include "main.h"
/**
 * print_sign - prints the sign of the given number +/-
 * @n: Number tested
 * Return: 1 if n positive and greater than zero, 0 if Zero, and -1 negative.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
