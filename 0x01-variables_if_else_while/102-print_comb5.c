#include <stdio.h>

/**
 * main - prints all possible different combination of two two-digits
 *
 * Return: Always 0
 */
jnt main(void)
{
	int m, n;

	for (m = 0; m < 99; m++)
	{
		for (n = m + 1; n <= 99; n++)
		{
			putchar('0' + m / 10);
			putchar('0' + m % 10);
			putchar(' ');
			putchar('0' + n / 10);
			putchar('0' + n % 10);


			if (m == 98 && n == 99)

				break;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
