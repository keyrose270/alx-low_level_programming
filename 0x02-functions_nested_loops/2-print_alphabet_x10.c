#include "main.h"
/**
 * print_alphabet_x10 - write the the lower-case alphabet on a line.
 */
void print_alphabet_x10(void)
{
char alp;
int p;
p = 0;
while (p < 10)
{
alp = 'a';
while (alp <= 'z')
{
_putchar(alp);
alp++;
}
_putchar('\n');
p++;
}
}
