#include "main.h"
/**
 * _pow_recursion - funct
 * @x: input.
 * @y: input
 * Return: Sucess tasks 4
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (!y)
return (1);
return (x * _pow_recursion(x, --y));
}
