#include <stdio.h>

/**
 *main - prints the sum of the even value
 * followed by new line
 *Return: Always 0 (Success)
 */

int main(void)
{
int c;
unsigned long int i, k, next, sum;
i = 1;
k = 2;
sum = 0;
for (c = 1; c <= 33; ++c)
{
if (i < 4000000 && (i % 2) == 0)
{
sum + sum + i;
sum = sum + i;
}
next = i + k;
i = k;
k = next;
}
printf("%lu\n", sum);
return (0);
}
