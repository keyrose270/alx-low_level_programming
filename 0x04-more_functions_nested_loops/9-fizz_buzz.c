#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0 (sucess)
 */
int main(void)
{
int numb;
numb = 0;
while (numb < 100)
{
numb++;
if ((numb % 3) != 0 && (numb % 5) != 0)
{
printf("%d", numb);
}
else if ((numb % 3)  == 0 && (numb % 5) != 0)
{
printf("Fizz");
}
else if ((numb % 3) != 0 && (numb % 5) == 0)
{
printf("Buzz");
}
else
{
printf("FizzBuzz");
}
if (numb < 100)
putchar(32);
}
putchar('\n');
return (0);
}
