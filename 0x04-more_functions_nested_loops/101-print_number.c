#include "main.h"
/**
* print_number - Prints a number
* @n: The number to print
*/
void print_number(int n)
{
unsigned int numba = n;
if (n < 0)
{
_putchar('-');
numba = -numba;
}
if (numba > 9)
{
print_number(numba / 10);
}
_putchar(numba % 10 + '0');
}
