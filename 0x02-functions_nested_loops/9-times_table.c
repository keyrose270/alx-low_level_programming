#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 * Return: Sucess tasks 9
 */
void times_table(void)
{
int a, b;
for (b = 0 ; b < 10 ; b++)
{
_putchar('0');
for (a = 1 ; a < 10 ; a++)
{
int sum = a * b;
_putchar(',');
if (sum / 100 == 0)
{
_putchar(32);
}
if (sum / 10 == 0)
{
_putchar(32);
}
else
{
_putchar('0' + (sum / 10));
}
if (sum % 10 == 0)
{
_putchar('0');
}
else
{
_putchar('0' + (sum % 10));
}
}
_putchar('\n');
}
}
