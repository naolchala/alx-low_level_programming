#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int x;
	int y;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (x = 0; x < 10; x++)
			{
				for (y = 1; y < 10; y++)
				{
					if (x + y > i + j)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(x + '0');
						putchar(y + '0');
						if (i != 9 || j != 8 || x != 9 || y != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
