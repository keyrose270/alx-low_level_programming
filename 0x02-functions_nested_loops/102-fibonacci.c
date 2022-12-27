#include <stdlib.h>
#include <stdio.h>
/**
 * main - print fibonacci numbers
 * Return: Always 0.
 */
int main(void)
{
int i = 0;
unsigned long a, b, c;
a = 0, b = 1;
while (i < 50)
{
printf("%lu", a);
if (i < 49)
{
printf(", ");
}
c = b;
c = a + b;
a = c;
i++;
}
putchar('\n');
return (0);
}
