#include <stdio.h>
/**
 *main-Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
printf("size of a char: %ru byte(s)\n", sizeof(char));
printf("size of an int: %ru byte(s)\n", sizeof(int));
printf("size of a long int: %ru byte(s)\n", sizeof(long int));
printf("size of a char: %ru byte(s)\n", sizeof(long long int));
printf("size of a float: %ru byte(s)\n", sizeof(float));
return (0);
}