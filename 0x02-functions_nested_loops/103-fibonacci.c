#include <stdio.h>
/**
 * main - main block
 * Description:  finds and prints the sum of the even-valued terms
 * Return: Sucess tasks 15
 */
int main(void)
{
int a = 0, b = 1, prev = 0;
int sum = 0;
while (prev < 4000000)
{
prev = a + b;
a = b;
b = prev;
if (prev % 2 == 0)
sum += prev;
}
printf("%i\n", sum);
return (0);
}
