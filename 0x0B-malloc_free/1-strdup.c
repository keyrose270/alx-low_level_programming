#include "main.h"
/**
 * _strdup - create a new array
 * @str: a pointer to the string to copy
 * Return: Returns NULL if str is NULL
 * otherwise a return a pointer to the new copy
 */
char *_strdup(char *str)
{
char *i;
unsigned int size = 0;
if (str)
{
while (str[size++])
;
i = malloc(sizeof(char) * size);
if (i)
{
while (size--)
i[size] = str[size];
return (i);
}
}
return (NULL);
}
