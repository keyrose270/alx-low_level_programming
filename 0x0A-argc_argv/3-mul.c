#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry_Point
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always.
 */
int main(int argc, char *argv[])
{
int a, b = 1;
if (argc != 3)
{
printf("Error\n");
return (1);
}
for (b = 1; a < argc; a++)
b *= atoi(argv[a]);
printf("%d\n", b);
return (0);
}
