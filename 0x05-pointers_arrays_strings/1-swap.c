#include "main.h"
/**
 * swap_int - reset a value to 98.
 * @a: one swaped
 * @b: two swapped
 */
void swap_int(int *a, int *b)
{
int tp;
tp = *a;
*a = *b;
*b = tp;
}
