#include "main.h"
/**
 * cap_string - converts string words to be capitalized
 * @s: the char to test
 * Return: Success Tasks 6
 */
char *cap_string(char *s)
{
int a;
if (s[0] > 96 && s[0] < 123)
s[0] -= 32;
for (a = 0; s[a] != '\0'; a++)
{
switch (s[a])
{
case ' ': case '\n': case '\t': case ',':
case ';': case '.': case '!': case '?': case '"':
case '(': case ')': case '{': case '}':
if (s[a + 1] > 96 && s[a + 1] < 123)
s[a + 1] -= 32;
}
}
return (0);
}
