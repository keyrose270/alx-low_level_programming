#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 excluding 2 and 4.
 */
void print_most_numbers(void)
{
int numb = 0;
while (numb < 10)
{
if (numb != 2 && numb != 4)
_putchar('0' + numb);
numb++;
}
_putchar('\n');
}
