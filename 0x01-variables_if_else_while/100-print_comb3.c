#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 48
	e = 4;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
