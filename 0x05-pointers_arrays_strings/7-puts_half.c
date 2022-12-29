#include "main.h"
/**
 * puts_half - print half of a string.
 * @str: string to process.
 */
void puts_half(char *str)
{
int lenght = 0;
while (*(str + lenght) != '\0')
{
lenght++;
}
if (!(lenght % 2))
lenght /= 2;
else
lenght = (lenght + 1) / 2;
while (*(str + lenght) != '\0')
{
_putchar(*(str + lenght));
lenght++;
}
_putchar('\n');
}
