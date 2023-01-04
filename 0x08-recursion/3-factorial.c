#include "main.h"
/**
 * factorial - returns the factorial 
 * @n: integer
 * Return: On success tasks 3.
 * returned -1 error.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
