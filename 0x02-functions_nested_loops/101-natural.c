#include <stdio.h>
#include <stdlib.h>
/**
 * main - add multiples of 3 & 5 below 1024
 * Return: Sucess tasks 13 Always 0.
 */
int main(void)
{
int a = 0, b = 0;
while (a < 1024)
{
if (a % 3 == 0 || a % 5 == 0)
b += a;
a++;
}
printf("%d\n", b);
return (0);
}
