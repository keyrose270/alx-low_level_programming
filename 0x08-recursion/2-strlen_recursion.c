#include "main.h"
/**
 * _strlen_recursion - function .
 * @s: strin .
 * Return: Sucess tasks 2.
 */
int _strlen_recursion(char *s)
{
if (*s)
{
return (1 + _strlen_recursion((s + 1)));
}
return (0);
}
