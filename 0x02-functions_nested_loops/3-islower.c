#include "main.h"
/**
 * _islower - Picks out the lowercase character of the alphabets
 * @c: Entry point
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
