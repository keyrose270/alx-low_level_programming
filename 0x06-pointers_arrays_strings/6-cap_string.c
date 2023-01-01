#include "main.h"
/**
 * *cap_string - function
 * @str: Pointer
 * Return: Success tasks 6.
 */
char *cap_string(char *str)
{
int S[14] = {' ', '\t', '\n', ',', ';', '.', '!',
'?', '"', '(', ')', '{', '}'};
int a, b;
for (a = 0; str[a] != '\0'; a++)
{
if (str[0] >= 97 && str[0] <= 122)
{
str[0] = str[0] - 32;
}
for (b = 0; b < 14; b++)
if (str[a] >= 97 && str[a] <= 122 && str[a - 1] == S[b])
str[a] = str[a] - 32;
}
return (str);
}
