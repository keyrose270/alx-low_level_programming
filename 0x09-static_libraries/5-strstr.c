#include "main.h"
#include <stdio.h>
/**
 * _strstr - Entry-point.
 * @haystack: string .
 * @needle: substring .
 * Return: return Success tasks 5.
 */
char *_strstr(char *haystack, char *needle)
{
unsigned int alpha, beta, c;
alpha = 0;
beta = 0;
c = 0;
while (haystack[alpha] != '\0')
{
if (needle[beta] == haystack[alpha])
{
c = 1;
beta++;
}
else
{
c = 0;
beta = 0;
}
if (needle[beta] == '\0' && c == 1)
return ((haystack + alpha - beta + 1));
else if (needle[beta] == '\0' && c == 0)
return (haystack);
alpha++;
}
return (0);
}
