#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 tasks 11 (sucess)
 */
int main(void)
{
long prime = 612852475143, divv;
while (divv < (prime / 2))
{
if ((prime % 2) == 0)
{
prime /= 2;
continue;
}
for (divv = 3; divv < (prime / 2); divv += 2)
{
if ((prime % divv) == 0)
{
prime /= divv;
}
}
}
printf("%ld\n", prime);
return (0);
}
