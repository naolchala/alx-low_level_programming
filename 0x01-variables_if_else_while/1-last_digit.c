#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
int n;
int lastDigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastDigit = n - ((n / 10) * 10);
printf("Last digit of %d is %d and is ", n, lastDigit);
if (lastDigit > 5)
{
printf("greater than 5");
}
else if (lastDigit == 0)
{
printf("0");
}
else
{
printf("less than 6 and not 0");
}
printf("\n");
return (0);
}
