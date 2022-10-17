#include <stdio.h>

/**
 * main - prints all possible different combination
 *
 * Return: Always 0
 */
int main(void)
{
	int n, i = '0', j;

	for (n = '0'; n <= '9'; n++)
	{
		for (j = i; j <= '9'; j++)
		{

			if (n != j)
			{

				putchar(n);

				putchar(j);
			}

			if (n == j)
			{

				continue;
			}

			if (n == '8' && j == '9')
			{

				break;
			}

			else
			{

				putchar(',');

				putchar(' ');
			}

		}
		i++;
	}
	putchar('\n');
	return (0);
}
