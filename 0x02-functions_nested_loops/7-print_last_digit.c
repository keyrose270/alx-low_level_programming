#include "main.h"
/**
 * print_last_digit - will print the last digit of a given number.
 * @t: Number used to find the last digit.
 * Description: will print the last digit.
 * Return: Success int value.
 */
int print_last_digit(int t)
{
t %= 10;
if (t < 0)
{
t *= -1;
}
_putchar('0' + t);
return (t);
}
