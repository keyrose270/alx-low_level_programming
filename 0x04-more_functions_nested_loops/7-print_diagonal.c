#include "main.h"
/**
 * print_diagonal - print a diagonal line to a given lenth.
 * @n: length to print to.
 */
void print_diagonal(int n)
{
int prior, a;
if (n <= 0)
{
_putchar('\n');
return;
}
for (a = 0 ; a < n ; a++)
{
prior = a;
while (prior > 0)
{
_putchar(32);
prior--;
}
_putchar('\\');
_putchar('\n');
}
}
