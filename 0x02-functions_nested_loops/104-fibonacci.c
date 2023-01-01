#include <stdio.h>
/**
*main - prints out first 98
*fibonacci 
*Return: return 0 Success tasks 16
*/
int main(void)
{
int inc;
unsigned long a1 = 0, a2 = 1, a3;
unsigned long a1b1, a1b2, a2b1, a2b2;
unsigned long b1, b2;
for (i = 0; i < 92; i++)
{
a3 = a1 + a2;
printf("%lu, ", a3);
a1 = a2;
a2 = a3;
}
a1b1 = a1 / 10000000000;
a2b1 = a2 / 10000000000;
a1b2 = a1 % 10000000000;
a2b2 = a2 % 10000000000;
for (i = 93; i < 99; i++)
{
b1 = a1b1 + a2b1;
b2 = a1b2 + a2b2;
if ((a1b2 + a2b2) > 9999999999)
{
b1 += 1;
b2 %= 10000000000;
}
printf("%lu%lu", b1, b2);
if (i != 98)
printf(", ");
a1b1 = a2b1;
a1b2 = a2b2;
a2b1 = a1;
a2b2 = a2;
}
printf("\n");
return (0);
}
