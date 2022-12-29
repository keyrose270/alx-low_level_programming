#include "main.h"
/**
 * more_numbers - prints 0 to 14 on one line ten times.
 */
void more_numbers(void)
{
int i;
int numb = 0;
for (i = 0 ; i < 10 ; i++)
{
while (numb < 15)
{
if (numb > 9)
_putchar('0' + numb / 10);
_putchar('0' + numb % 10);
numb++;
}
numb = 0;
_putchar('\n');
}
}
