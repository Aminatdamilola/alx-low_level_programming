#include <stdio.h>

/**
 * main - prints all possible 3 different combination
 *
 * Return: Always 0
 */
int main(void)
{
	int k, i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i == '7' && j == '8' && k == '9')
					{
						break;
					}
					else
					{
						putchar(',');

						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
