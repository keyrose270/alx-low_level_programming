#include <stdio.h>
/**
 * print_fib - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 * @len: the length of with the fib sequance should print to.
 * Return: Sucess tasks 15
 */
void print_fib(int len)
{
unsigned int target, i;
unsigned int former_l, former_r;
unsigned int latter_l, latter_r;
unsigned int fib_l, fib_r;
f = 1;
l = 2;
target = len - 2;
for (i = 0 ; i < target ; i++)
{
fib = f + l;
printf("%d : ", i + 4);
printf("%.0Lf", fib);
f = l;
l = fib;
if (i < target - 1)
printf("\n");
}
putchar('\n');
}
return (0);
}
