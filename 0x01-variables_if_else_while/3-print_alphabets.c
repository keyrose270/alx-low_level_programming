#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
char a;
char b;
for (a = 'a'; a <= 'z'; a++)
putchar(a);
for (b = 'A'; b <= 'Z'; b++)
putchar(a);
putchar(b);
putchar('\n');
return (0);
}
