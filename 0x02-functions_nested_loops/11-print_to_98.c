#include "main.h"

/**
 * print_to_98 - print all natural number to 98
 * @n: the starting number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			_putchar("%d\n", n);
                        n--;
	}
	else
	{
		while (n < 98)
         		_putchar("%d\n", n);
                        n++;
	}
}
