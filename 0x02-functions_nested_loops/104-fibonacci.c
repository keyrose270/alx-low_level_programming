#include <stdio.h>
/**
 * main - main bloc
 * print_fib - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 * Return: Sucess tasks 16
 */
int main(void)
{
int i;
unsigned long u1 = 1, u2 = 2, u3;
unsigned long u1_n1, u1_n2, u2_n1, u2_n2;
unsigned long n1, n2;
for (i = 0; i < 92; i++)
{
u3 = u1 + u2;
printf("%lu, ", u3);
u1 = u2;
u2 = u3;
}
u1_n1 = u1 / 10000000000;
u2_n1 = u2 / 10000000000;
u1_n2 = u1 % 10000000000;
u2_n2 = u2 % 10000000000;
for (i = 93; i < 99; i++)
{
n1 = u1_n1 + u2_n1;
u2 = u1_n2 + u2_n2;
if ((u1_n2 + u2_n2) > 9999999999)
{
n1 += 1;
n2 %= 10000000000;
}
printf("%lu%lu", n1, n2);
if (inc != 98)
printf(", ");
u1_n1 = u2_n1;
u1_n2 = u2_n2;
u2_n1 = n1;
u2_n2 = n2;
}
printf("\n");
return (0);
}
