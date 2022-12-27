#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}
