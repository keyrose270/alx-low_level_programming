#include "main.h"
/**
 * print_numbers - prints 0 to 9.
 */
void print_numbers(void)
{
int numb = 0;
while (numb < 10)
{
_putchar('0' + numb);
numb++;
}
_putchar('\n');
}
