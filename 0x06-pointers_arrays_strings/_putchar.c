#include <unistd.h>

/**
 * _putchar - write character c on stdout
 * @c: charactr to be printed
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
