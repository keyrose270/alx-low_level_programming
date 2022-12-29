#include <unistd.h>
/**
 * _putchar - character c to stdout
 * @c: The character
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
