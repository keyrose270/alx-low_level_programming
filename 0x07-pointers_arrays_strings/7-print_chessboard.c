#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: current location
 * Return: Always 0 Success tasks 7
 */
void print_chessboard(char (*a)[8])
{
int alpha, beta;
for (alpha = 0; alpha < 8; alpha++)
{
for (beta = 0; beta < 8; beta++)
_putchar(a[alpha][beta]);
_putchar('\n');
}
}
