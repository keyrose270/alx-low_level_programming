#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: Success tasks 11
 */
int main(void)
{
char i;
int b;
srand(time(0));
while (b <= 2645)
{
i = rand() % 128;
b += i;
putchar(i);
}
putchar(2772 - b);
return (0);
}
