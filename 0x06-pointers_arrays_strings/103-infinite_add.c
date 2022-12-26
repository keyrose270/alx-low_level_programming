#include "main.h"
/**
 * infinite_add - adds values of two strings together
 * @n1: first string of integers
 * @n2: second string of ints
 * @r: result string
 * @size_r: size of result string
 * Return: Success void
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int le1 = 0, num1 = 0, sum1 = 0;
int le2 = 0, num2 = 0, sum2 = 0;
int num = 0, sum = 0, b, a;
char temp, n1c[1000], n2c[1000];
while (n1[le1] != '\0')
le1++;
while (n2[le2] != '\0')
le2++;
if (le1 >= size_r || le2 >= size_r)
return (0);
for (a = 0, b = le1 - 1; a < le1; a++, b--)
n1c[a] = n1[b];
n1c[a] = '\0';
for (a = 0, b = le2 - 1; a < le2; a++, b--)
n2c[a] = n2[b];
n2c[a] = '\0';
while (num < size_r - 1)
{
if (num1 >= le1 && num2 >= le2 && sum == 0)
break;
sum1 = num1 < le1 ? n1c[num1] - '0' : 0;
sum2 = num2 < le2 ? n2c[num2] - '0' : 0;
sum += (sum1 + sum2);
r[num] = sum % 10 + '0';
sum = sum < 10 ? 0 : 1;
num++, num1++, num2++;
}
if (sum != 0)
return (0);
r[num] = '\0';
for (a = 0, b = --num; a < num / 2; a++, b--)
temp = r[a], r[a] = r[b], r[b] = temp;
return (0);
}
