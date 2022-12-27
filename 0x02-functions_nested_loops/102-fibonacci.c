#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
int t = 0;
unsigned long a, b, c;
a = 1, b = 2;
while (t < 50)
{
printf("%lu", a);
if (t < 49)
{
printf(", ");
}
c = b;
c = a + b;
a = c;
t++;
}
putchar('\n');
return (0);
}
