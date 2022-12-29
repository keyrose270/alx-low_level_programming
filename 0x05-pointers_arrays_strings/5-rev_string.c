#include "main.h"
/**
  * rev_string - reverse a string.
  * @s: string to reverse
  */
void rev_string(char *s)
{
int sta, te;
int end = 0;
while (*(s + end) != '\0')
{
end++;
}
end -= 1;
sta = 0;
while (end > sta)
{
te = s[sta];
s[sta] = s[end];
s[end] = te;
sta++;
end--;
}
}
