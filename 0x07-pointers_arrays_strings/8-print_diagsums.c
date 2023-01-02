#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints
 * @a: input.
 * @size: size array.
 * Return: Sucess tasks 8
 */
void print_diagsums(int *a, int size)
{
int alpha, beta;
int key1, key2;
alpha = 0;
beta = 0;
key1 = 0;
key2 = 0;
while (key1 < size)
{
alpha += *(a + key1  *size + key2);
beta += *(a + key1  *size + (size - 1 - key2));
key2++;
key1++;
}
printf("%d, %d\n", alpha, beta);
}
