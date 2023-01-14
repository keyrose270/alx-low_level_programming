#include "main.h"
/**
  * _strlen - returns the length of a string.
  * @s: the string.
  * Return: Success tasks 2
  */
int _strlen(char *s)
{
int countable = 0;
while (*(s + countable) != '\0')
{
countable++;
}
return (countable);
}
