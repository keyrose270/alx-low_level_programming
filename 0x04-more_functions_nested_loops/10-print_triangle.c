#include "main.h"
/**
 * print_triangle - print a triangle at a give size.
 * @size : size of triangle to print.
 */
void print_triangle(int size)
{
/*
 * int a: for iteration in for loop.
 * int marg: will recored the amount.
 * int dist: is used to offset size.
 * int print: is used to tell how many '#'
 */
int a, marg, dist, print;
if (size <= 0)
{
_putchar('\n');
return;
}
dist = size - 1;
for (a = 0 ; a < size ; a++)
{
marg = 0;
while (marg < (dist - a))
{
_putchar(32);
marg++;
}
print = size - marg;
while (print > 0)
{
_putchar('#');
print--;
}
_putchar('\n');
}
}
