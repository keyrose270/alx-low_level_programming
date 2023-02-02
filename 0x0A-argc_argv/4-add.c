#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry_Point.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always.
 */
int main(int argc, char *argv[])
{
int a, b, c = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (!isdigit(argv[a][b]))
{
printf("Error\n");
return (1);
}
}
c += atoi(argv[a]);
}
printf("%d\n", c);
return (0);
}
