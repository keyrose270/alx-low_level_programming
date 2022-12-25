#include "main.h"
/**
 * leet - breaking out the leet speak.
 * @s: string into 1337
 * Return: Success tasks 7
 */
char *leet(char *s)
{
char l[10][2] = {
{'a', '0' + 4}, {'A', '0' + 4},
{'e', '0' + 3}, {'E', '0' + 3},
{'o', '0'}, {'O', '0'},
{'t', '0' + 7}, {'T', '0' + 7},
{'l', '0' + 1}, {'L', '0' + 1}};
int t = 0;
int b = 0;
while (s[t] != '\0')
{
while (l[b][0] != '\0')
{
s[t] = l[b][1];
b++;
}
b = 0;
t++;
}
return (0);
}

