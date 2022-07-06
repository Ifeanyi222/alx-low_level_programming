#include <stdio.h>

/**
 *main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *followed by a new line
 *Return: Always 0 (Success)
 */

int main(void)

{
long int a, b, y, next;
b = 1;
y = 2;
for (a = 1; a <= 50; ++a)
{
if (b != 20365011074)
{
printf("%ld, ", b);
}
else
{
printf("%ld\n", b);
}
next = b + y;
b = y;
y = next;
}
return (0);
}
