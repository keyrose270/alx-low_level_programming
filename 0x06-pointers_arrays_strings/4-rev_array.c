#include "main.h"
/**
 * reverse_array - desciption
 * @a: input array
 * @n: number of elements to reverse.
 * Return: Success tasks 4
 */
void reverse_array(int *a, int n)
{
int i, temp, b = n;
for (b--, i = 0; i < n / 2; i++, b--)
temp = a[i], a[i] = a[b], a[b] = temp;
}
