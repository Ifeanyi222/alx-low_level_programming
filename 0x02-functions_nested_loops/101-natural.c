#include <stdio.h>

/**
 *main - computes and prints the sum of all the multiples
 *of 3 or 5 below 1024
 *Return: Always 0 (Success)
 */

int main(void)

{
unsigned long int sum_3, sum_5, sum;
int z;
sum_3 = 0;
sum_5 = 0;
sum = 0;
for (z = 0; z < 1024; ++z)
{
if ((z % 3) == 0)
{
sum_3 = sum_3 + z;
}
else if ((z % 5) == 0)
{
sum_5 = sum_5 + z;
}
}
sum = sum_3 + sum_5;
printf("%lu\n", sum);
return (0);
}
