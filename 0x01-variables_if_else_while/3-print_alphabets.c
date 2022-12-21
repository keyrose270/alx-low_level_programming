#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
char a;
char b;
a = 'z';
b = 'Z';
for (a = 'a'; a <= 'z'; a++)
putchar(a);
for (b = 'A'; b <= 'Z'; b++)
putchar(b);
putchar('\n');
return (0);
}
