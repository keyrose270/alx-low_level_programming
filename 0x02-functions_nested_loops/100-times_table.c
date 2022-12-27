#include "main.h"
/**
 * print_times_table - prints times table
 * @n: value of how large the times
 * Return: Sucess tasks 12
 */
void print_times_table(int n)
{
if (n < 16 && n > -1)
{
int column, row, sum, a, b, c;
column = 0;
while (column <= n)
{
_putchar('0');
row = 1;
while (row <= n)
{
sum = column *row;
a = sum / 100, b = sum / 10 % 10, c = sum % 10;
_putchar(',');
_putchar(' ');
if (sum > 99)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(c + '0');
}
else if (sum < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(c + '0');
}
else
{
_putchar(' ');
_putchar(b + '0');
_putchar(c + '0');
}
row++;
}
_putchar('\n');
column++;
}
}
}
