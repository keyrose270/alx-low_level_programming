#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
int k, s;
for (k = 0; k <= 98; k++)
{
for (s = k + 1; s <= 99; s++)
{
putchar((k / 10) + '0');
putchar((k % 10) + '0');
putchar(' ');
putchar((s / 10) + '0');
putchar((s % 10) + '0');
if (k == 9 && s == 9)
{
continue;
}
else if (k == 98 && s == 99)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
