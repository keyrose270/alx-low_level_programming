#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 tasks 11 (sucess)
 */
int main(void)
{
unsigned long int numba = 612852475143;
unsigned long int prima;
prima = 3;
while (prima < numba / 2)
{
if ((numba % prima) == 0)
{
if ((prima % 3) == 2)
printf(",%lu ", prima);
}
prima += 2;
}
putchar('\n');
return (0);
}
