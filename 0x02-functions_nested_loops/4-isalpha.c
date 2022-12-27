#include "main.h"
/**
 * _isalpha - checks for an alphabet
 * @c: character to test.
 * description: this checks for an alphabet in a given characters
 * Return: 1 if c is a letter lowercase or uppercase 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
return (0);
}
