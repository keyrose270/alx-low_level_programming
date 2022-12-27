#include "main.h"
/**
 * jack_bauer - print every minute of the day, starting from 00:00 - 23:59.
 * Return : void
 */
void jack_bauer(void)
{
int h0, h1;
for (h0 = 0; h0 < 24; h0++)
{
for (h1 = 0; h1 < 60; h1++)
{
_putchar((h0 / 10) + '0');
_putchar((h0 % 10) + '0');
_putchar(':');
_putchar((h1 / 10) + '0');
_putchar((h1 % 10) + '0');
_putchar('\n');
}
}
}
